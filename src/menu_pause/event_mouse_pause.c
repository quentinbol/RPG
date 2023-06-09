/*
** EPITECH PROJECT, 2023
** event_mouse_pause.c
** File description:
** BY - CM
*/

#include "rpg.h"

void over_pause_bis(pause_t *pause, window_t *win, int x, int y)
{
    if (pause->index == 0) {
        if (x >= 1020 && x <= 1310 && y >= 610 && y <= 660)
            sfText_setFillColor(pause->quit, sfBlue);
        else
            sfText_setFillColor(pause->quit, sfBlack);
    }
    if (pause->index == 1) {
        if (x >= 640 && x <= 870 && y >= 750 && y <= 800)
            sfText_setFillColor(pause->ret, sfBlue);
        else
            sfText_setFillColor(pause->ret, sfBlack);
    }
}

void over_button_pause(pause_t *pause, window_t *win)
{
    int x = win->evt.mouseMove.x;
    int y = win->evt.mouseMove.y;

    if (pause->index == 0) {
        if (x >= 640 && x <= 870 && y >= 410 && y <= 460)
            sfText_setFillColor(pause->resume, sfBlue);
        else
            sfText_setFillColor(pause->resume, sfBlack);
        if (x >= 640 && x <= 810 && y >= 610 && y <= 660)
            sfText_setFillColor(pause->save, sfBlue);
        else
            sfText_setFillColor(pause->save, sfBlack);
        if (x >= 1020 && x <= 1290 && y >= 420 && y <= 460)
            sfText_setFillColor(pause->settings, sfBlue);
        else
            sfText_setFillColor(pause->settings, sfBlack);
        over_pause_bis(pause, win, x, y);
    }
}

void check_button_pause(pause_t *pause, window_t *win)
{
    int x = win->evt.mouseButton.x;
    int y = win->evt.mouseButton.y;

    if (pause->index == 0) {
        if (x >= 640 && x <= 870 && y >= 410 && y <= 460) {
            pause->is_pause = sfFalse;
            sfRenderWindow_setActive(win->win, sfTrue);
        }
        if (x >= 640 && x <= 810 && y >= 610 && y <= 660)
            return;
        if (x >= 1020 && x <= 1290 && y >= 420 && y <= 460)
            pause->index = 1;
        if (x >= 1020 && x <= 1310 && y >= 610 && y <= 660) {
            pause->is_pause = sfFalse;
            sfRenderWindow_close(win->win);
        }
    }
    if (pause->index == 1)
        if (x >= 640 && x <= 870 && y >= 750 && y <= 800)
            pause->index = 0;
}
