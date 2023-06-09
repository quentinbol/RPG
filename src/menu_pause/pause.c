/*
** EPITECH PROJECT, 2023
** pause.c
** File description:
** BY - CM
*/

#include "rpg.h"

sfSprite *get_sprite_pause(void)
{
    sfSprite *font = sfSprite_create();
    sfTexture *te = sfTexture_createFromFile("assets/Menu/book.png", NULL);

    sfSprite_setTexture(font, te, sfTrue);
    sfSprite_setTextureRect(font, (sfIntRect){570, 0, 182, 157});
    sfSprite_setScale(font, (sfVector2f){6, 6});
    sfSprite_setPosition(font, (sfVector2f){414, 69});
    return font;
}

int event_pause(general_t *all, window_t *win, pause_t *pause)
{
    while (sfRenderWindow_pollEvent(win->win, &win->evt)) {
        if (win->evt.type == sfEvtClosed) {
            pause->is_pause = sfFalse;
            sfRenderWindow_close(win->win);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            pause->is_pause = sfFalse;
            sfRenderWindow_setActive(win->win, sfTrue);
        }
        if (all->win->evt.type == sfEvtMouseMoved)
            over_button_pause(pause, win);
        if (all->win->evt.type == sfEvtMouseButtonPressed)
            check_button_pause(pause, win);
    }
    return 0;
}

int process_pause(general_t *all, window_t *win)
{
    sfTexture *tex = sfTexture_create(1920, 1080);

    all->pause->is_pause = sfTrue;
    all->pause->font = get_sprite_pause();
    all->pause->background = sfSprite_create();
    while (sfRenderWindow_pollEvent(win->win, &win->evt));
    get_text_menu(all->pause);
    sfSprite_setTexture(all->pause->background, tex, sfTrue);
    sfRenderWindow_setActive(win->win, sfFalse);
    sfTexture_updateFromRenderWindow(tex, win->win, 1920, 1080);
    while (all->pause->is_pause) {
        event_pause(all, win, all->pause);
        display_menu(win, all->pause);
    }
    sfTexture_destroy(tex);
    destroy_menu(all->pause);
    return 0;
}

pause_t *my_pause_create(void)
{
    pause_t *pause = malloc(sizeof(pause_t));

    pause->background = NULL;
    pause->font = NULL;
    pause->title = NULL;
    pause->resume = NULL;
    pause->save = NULL;
    pause->quit = NULL;
    pause->ret = NULL;
    pause->index = 0;
    return pause;
}
