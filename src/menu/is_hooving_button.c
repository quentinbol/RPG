/*
** EPITECH PROJECT, 2023
** to check if mouse is over any buttons
** File description:
** jrg
*/

#include "rpg.h"

static int my_show_button_2(window_t *win, int x, int y)
{
    if (x >= 1050 && x <= 1150 && y >= 325 && y <= 365) {
        sfSprite_setScale(win->menu->case_no, (V){2, 2});
        sfSprite_setScale(win->menu->case_yes, (V){2, 2});
    }
    if (x >= 1050 && x <= 1085 && y >= 720 && y <= 755 && !win->menu->sfx)
        sfSprite_setScale(win->menu->sfxoff, (V){2, 2});
    if (x >= 1050 && x <= 1085 && y >= 720 && y <= 755 && win->menu->sfx)
        sfSprite_setScale(win->menu->sfxon, (V){2, 2});
    return 0;
}

static int is_hooving_button_bis(window_t *win, int x, int y)
{
    if (win->index == 0) {
        if (x >= 90 && x <= 310 && y >= 50 && y <= 113) {
            sfSprite_setScale(win->menu->how_to_play, (V){1.1, 1.1});
            sfText_setScale(win->menu->button_text, (V){1.5, 1.7});
        } else {
            sfSprite_setScale(win->menu->how_to_play, (V){0.8, 0.8});
            sfText_setScale(win->menu->button_text, (V){1.1, 1.1});
        }
        if (x >= 1030 && x <= 1310 && y >= 620 && y <= 660)
            sfText_setFillColor(win->menu->quit, sfBlue);
        else
            sfText_setFillColor(win->menu->quit, sfBlack);
    } else
        my_show_button_2(win, x, y);
    return 0;
}

int is_hooving_button(window_t *win)
{
    int x = win->evt.mouseMove.x;
    int y = win->evt.mouseMove.y;

    if (win->index == 0) {
        if (x >= 640 && x <= 770 && y >= 410 && y <= 460)
            sfText_setFillColor(win->menu->start_the_game, sfBlue);
        else
            sfText_setFillColor(win->menu->start_the_game, sfBlack);
        if (x >= 640 && x <= 860 && y >= 610 && y <= 660)
            sfText_setFillColor(win->menu->resume_game, sfBlue);
        else
            sfText_setFillColor(win->menu->resume_game, sfBlack);
        if (x >= 1030 && x <= 1290 && y >= 420 && y <= 460)
            sfText_setFillColor(win->menu->settings, sfBlue);
        else
            sfText_setFillColor(win->menu->settings, sfBlack);
    }
    return is_hooving_button_bis(win, x, y);
}
