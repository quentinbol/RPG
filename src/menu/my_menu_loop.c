/*
** EPITECH PROJECT, 2023
** my_menu_loop.c
** File description:
** menu's loop
*/

#include "rpg.h"

static void my_check_where_to_go(window_t *win)
{
    if (win->evt.mouseMove.x > 1423 && sfTime_asSeconds(win->time) > 0.2)
        if (win->index == 0) {
            win->index ++;
            my_turn_page_right(win);
            sfClock_restart(win->clock);
        }
    if (win->evt.mouseMove.x < 500 && win->evt.mouseMove.x != 0 &&
        sfTime_asSeconds(win->time) > 0.2)
        if (win->index == 1) {
            win->index --;
            my_turn_page_left(win);
            sfClock_restart(win->clock);
        }
    return;
}

static void my_menu_event(general_t *all)
{
    while (sfRenderWindow_pollEvent(all->win->win, &all->win->evt)) {
        if (all->win->evt.type == sfEvtMouseMoved) {
            all->win->time = sfClock_getElapsedTime(all->win->clock);
            is_hooving_button(all->win);
        }
        if (all->win->evt.type == sfEvtClosed) {
            all->index_scenes = 0;
            sfRenderWindow_close(all->win->win);
        }
        if (all->win->evt.type == sfEvtMouseButtonPressed)
            all->index_scenes = my_check_button(all->win);
        if (all->index_scenes == -1)
            sfRenderWindow_close(all->win->win);
        my_check_where_to_go(all->win);
    }
}

void my_menu_loop(general_t *all)
{
    my_menu_event(all);
    my_menu_disp(all->win);
}
