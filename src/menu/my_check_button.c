/*
** EPITECH PROJECT, 2023
** my_check_button.c
** File description:
** my_check_button.c
*/

#include "rpg.h"

static int my_check_buttons_settings2(window_t *win, int x, int y)
{
    if (x >= 1180 && x <= 1230 && y >= 460 && y <= 520 &&
        win->menu->loud <= 95) {
        win->menu->loud += 5;
        sfMusic_setVolume(win->menu->menu_song, win->menu->loud);
    }
    if (x >= 1180 && x <= 1230 && y >= 550 && y <= 610 &&
        win->menu->loud >= 5) {
        win->menu->loud -= 5;
        sfMusic_setVolume(win->menu->menu_song, win->menu->loud);
    }
    if (x >= 1020 && x <= 1080 && y >= 690 && y <= 750 && !win->menu->sfx) {
        win->menu->sfx = true;
        return 1;
    }
    if (x >= 1020 && x <= 1080 && y >= 690 && y <= 750 && win->menu->sfx) {
        win->menu->sfx = false;
        return 1;
    }
    return 1;
}

static int my_check_buttons_settings(window_t *win, int x, int y)
{
    if (x >= 1020 && x <= 1080 && y >= 300 && y <= 360)
        if (!win->menu->full_screen) {
            win->menu->full_screen = true;
            my_switch_window(win);
        } else {
            win->menu->full_screen = false;
            my_switch_window(win);
        }
    if (x >= 1020 && x <= 1080 && y >= 500 && y <= 560) {
        if (win->menu->music_playing) {
            sfMusic_setVolume(win->menu->menu_song, 0);
            win->menu->music_playing = false;
            return 1;
        }
        if (!win->menu->music_playing) {
            sfMusic_setVolume(win->menu->menu_song, win->menu->loud);
            win->menu->music_playing = true;
        }
    }
    return my_check_buttons_settings2(win, x, y);
}

int my_check_info(int x, int y, window_t *win)
{
    if (x >= 90 && x <= 310 && y >= 50 && y <= 113) {
        win->tuto = my_create_tuto_win();
        while (sfRenderWindow_isOpen(win->tuto->win))
            my_tuto_loop(win);
        return 1;
    }
    return 0;
}

int my_check_button(window_t *win)
{
    int x = win->evt.mouseButton.x;
    int y = win->evt.mouseButton.y;

    if (win->index == 0) {
        if (my_check_info(x, y, win) != 0)
            return 1;
        if (x >= 640 && x <= 770 && y >= 410 && y <= 460) {
            sfMusic_stop(win->menu->menu_song);
            return 2;
        }
        if (x >= 1030 && x <= 1290 && y >= 420 && y <= 460) {
            win->index ++;
            my_turn_page_right(win);
        }
        if (x >= 1030 && x <= 1310 && y >= 620 && y <= 660)
            return -1;
    }
    if (win->index == 1)
        return my_check_buttons_settings(win, x, y);
    return 1;
}
