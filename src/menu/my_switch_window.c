/*
** EPITECH PROJECT, 2023
** my_switch_window.c
** File description:
** to turn fullscreen or not
*/

#include "rpg.h"

int my_switch_window(window_t *win)
{
    sfVideoMode video = {1920, 1080, 32};
    sfRenderWindow *window = NULL;
    char *n = "RPG";

    if (win->menu->full_screen) {
        sfRenderWindow_destroy(win->win);
        window = sfRenderWindow_create(video, n, sfFullscreen | sfClose, NULL);
        win->win = window;
    } else {
        sfRenderWindow_destroy(win->win);
        window = sfRenderWindow_create(video, n, sfResize | sfClose, NULL);
        win->win = window;
    }
    return 0;
}
