/*
** EPITECH PROJECT, 2023
** my_destroy_window.c
** File description:
** to destroy the window struct
*/

#include "rpg.h"

static int my_info_destroy(info_t *tuto)
{
    if (!tuto)
        return 0;
    sfRenderWindow_destroy(tuto->win);
    sfText_destroy(tuto->script);
    sfSprite_destroy(tuto->background);
    free(tuto);
    return 0;
}

static int my_menu_destroy_2(menu_t *menu)
{
    sfSprite_destroy(menu->sfxon);
    sfSprite_destroy(menu->sfxoff);
    sfText_destroy(menu->title);
    sfMusic_destroy(menu->menu_song);
    free(menu);
    return 0;
}

static int my_menu_destroy(menu_t *menu)
{
    sfSprite_destroy(menu->back);
    sfSprite_destroy(menu->background);
    sfSprite_destroy(menu->how_to_play);
    sfText_destroy(menu->button_text);
    sfText_destroy(menu->settings);
    sfText_destroy(menu->start_the_game);
    sfText_destroy(menu->resume_game);
    sfText_destroy(menu->quit);
    sfSprite_destroy(menu->volume_up);
    sfSprite_destroy(menu->volume_down);
    sfSprite_destroy(menu->volume);
    sfText_destroy(menu->volume_text);
    sfText_destroy(menu->fullscreen);
    sfSprite_destroy(menu->case_yes);
    sfSprite_destroy(menu->case_no);
    sfText_destroy(menu->sfx_name);
    my_menu_destroy_2(menu);
    return 0;
}

int my_free_window(window_t *win)
{
    if (!win)
        return 0;
    sfRenderWindow_destroy(win->win);
    my_menu_destroy(win->menu);
    sfClock_destroy(win->clock);
    my_info_destroy(win->tuto);
    free(win);
    return 0;
}

int my_free_name(name_t *name)
{
    if (!name)
        return 0;
    sfSprite_destroy(name->button);
    sfText_destroy(name->enter_name);
    sfText_destroy(name->limit_char);
    sfText_destroy(name->username);
    free(name->name);
    free(name);
    return 0;
}
