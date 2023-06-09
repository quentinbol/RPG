/*
** EPITECH PROJECT, 2023
** display_menu_pause.c
** File description:
** BY - CM
*/

#include "rpg.h"

void display_settings_pause(window_t *win, pause_t *pause)
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
    sfRenderWindow_drawText(win->win, pause->ret, NULL);
}

void display_menu_pause(window_t *win, pause_t *pause)
{
    sfRenderWindow_drawText(win->win, pause->resume, NULL);
    sfRenderWindow_drawText(win->win, pause->save, NULL);
    sfRenderWindow_drawText(win->win, pause->settings, NULL);
    sfRenderWindow_drawText(win->win, pause->quit, NULL);
}

void display_menu(window_t *win, pause_t *pause)
{
    sfRenderWindow_drawSprite(win->win, pause->background, NULL);
    sfRenderWindow_drawSprite(win->win, pause->font, NULL);
    sfRenderWindow_drawText(win->win, pause->title, NULL);
    switch (pause->index) {
    case 0: display_menu_pause(win, pause); break;
    case 1: display_settings_pause(win, pause); break;
    }
    sfRenderWindow_display(win->win);
}
