/*
** EPITECH PROJECT, 2023
** my_menu_loop.c
** File description:
** my_menu_loop
*/

#include "rpg.h"

static int my_disp_play(window_t *win)
{
    sfRenderWindow_drawSprite(win->win, win->menu->how_to_play, NULL);
    sfRenderWindow_drawText(win->win, win->menu->button_text, NULL);
    sfRenderWindow_drawText(win->win, win->menu->start_the_game, NULL);
    sfRenderWindow_drawText(win->win, win->menu->resume_game, NULL);
    sfRenderWindow_drawText(win->win, win->menu->settings, NULL);
    sfRenderWindow_drawText(win->win, win->menu->quit, NULL);
    return 0;
}

static int my_disp_settings(window_t *win)
{
    sfRenderWindow_drawText(win->win, win->menu->fullscreen, NULL);
    if (!win->menu->full_screen)
        sfRenderWindow_drawSprite(win->win, win->menu->case_no, NULL);
    else
        sfRenderWindow_drawSprite(win->win, win->menu->case_yes, NULL);
    sfRenderWindow_drawText(win->win, win->menu->volume_text, NULL);
    sfRenderWindow_drawSprite(win->win, win->menu->volume, NULL);
    sfRenderWindow_drawSprite(win->win, win->menu->volume_up, NULL);
    sfRenderWindow_drawSprite(win->win, win->menu->volume_down, NULL);
    sfRenderWindow_drawText(win->win, win->menu->sfx_name, NULL);
    if (win->menu->sfx)
        sfRenderWindow_drawSprite(win->win, win->menu->sfxon, NULL);
    else
        sfRenderWindow_drawSprite(win->win, win->menu->sfxoff, NULL);
    return 0;
}

void my_menu_disp(window_t *win)
{
    sfRenderWindow_clear(win->win, sfBlack);
    sfRenderWindow_drawSprite(win->win, win->menu->background, NULL);
    sfRenderWindow_drawSprite(win->win, win->menu->back, NULL);
    sfRenderWindow_drawText(win->win, win->menu->title, NULL);
    switch (win->index) {
    case 0: my_disp_play(win); break;
    case 1: my_disp_settings(win); break;
    }
    sfRenderWindow_display(win->win);
}
