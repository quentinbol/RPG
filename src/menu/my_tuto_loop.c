/*
** EPITECH PROJECT, 2023
** my_tuto_loop.c
** File description:
** the tuto loop
*/

#include "rpg.h"

static int my_get_evt_tuto(window_t *win)
{
    while (sfRenderWindow_pollEvent(win->tuto->win, &win->tuto->event))
        if (win->tuto->event.type == sfEvtClosed)
            sfRenderWindow_close(win->tuto->win);
}

static int my_disp_tuto(window_t *win)
{
    sfRenderWindow_clear(win->tuto->win, sfBlack);
    sfRenderWindow_drawSprite(win->tuto->win, win->tuto->background, NULL);
    sfRenderWindow_drawText(win->tuto->win, win->tuto->script, NULL);
    sfRenderWindow_display(win->tuto->win);
    return 0;
}

int my_tuto_loop(window_t *win)
{
    my_get_evt_tuto(win);
    my_disp_tuto(win);
    return 0;
}
