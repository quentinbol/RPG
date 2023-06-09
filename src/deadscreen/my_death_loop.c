/*
** EPITECH PROJECT, 2023
** my_deth_loop.c
** File description:
** event and disp func for death screen
*/

#include "rpg.h"

static int is_hooving_button_dead(general_t *all, bool *is_dead)
{
    int x = all->win->evt.mouseMove.x;
    int y = all->win->evt.mouseMove.y;

    if (x >= 730 && x <= 1160 && y >= 200 && y <= 260)
        sfText_setColor(all->dead->quit, sfRed);
    else
        sfText_setColor(all->dead->quit, sfBlue);
    if (x >= 750 && x <= 930 && y >= 850 && y <= 900)
        sfText_setColor(all->dead->menu, sfRed);
    else
        sfText_setColor(all->dead->menu, sfBlue);
    return 0;
}

static int my_check_button_dead(general_t *all, bool *is_dead)
{
    int x = all->win->evt.mouseButton.x;
    int y = all->win->evt.mouseButton.y;

    if (x >= 730 && x <= 1160 && y >= 200 && y <= 260) {
        *is_dead = false;
        sfRenderWindow_close(all->win->win);
    }
    if (x >= 750 && x <= 930 && y >= 850 && y <= 900) {
        *is_dead = false;
        all->index_scenes = 1;
    }
    return 0;
}

static void death_escape(general_t *all, bool *is_dead)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        *is_dead = false;
        sfRenderWindow_close(all->win->win);
    }
}

int my_death_event(general_t *all, bool *is_dead)
{
    while (sfRenderWindow_pollEvent(all->win->win, &all->win->evt)) {
        if (all->win->evt.type == sfEvtMouseMoved)
            is_hooving_button_dead(all, is_dead);
        if (all->win->evt.type == sfEvtMouseButtonPressed)
            my_check_button_dead(all, is_dead);
        if (sfKeyboard_isKeyPressed)
            death_escape(all, is_dead);
    }
}

int my_death_disp(general_t *all)
{
    sfRenderWindow_clear(all->win->win, sfBlack);
    sfRenderWindow_drawSprite(all->win->win, all->dead->background, NULL);
    sfRenderWindow_drawText(all->win->win, all->dead->quit, NULL);
    sfRenderWindow_drawText(all->win->win, all->dead->menu, NULL);
    sfRenderWindow_display(all->win->win);
    return 0;
}
