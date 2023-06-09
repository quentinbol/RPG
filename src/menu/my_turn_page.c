/*
** EPITECH PROJECT, 2023
** my_turn_page.c
** File description:
** to turn the page
*/

#include "rpg.h"

static void draw_sprite_and_not_7up(window_t *win, sfIntRect rect)
{
    sfSprite_setTextureRect(win->menu->back, rect);
    sfRenderWindow_drawSprite(win->win, win->menu->background, NULL);
    sfRenderWindow_drawSprite(win->win, win->menu->back, NULL);
    sfRenderWindow_display(win->win);
}

int my_turn_page_left(window_t *win)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    sfIntRect rect = {1140, 0, 182, 157};
    bool is_over = false;

    while (!is_over) {
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) >= 0.2) {
            rect.left -= 190;
            sfClock_restart(clock);
        }
        sfRenderWindow_clear(win->win, sfBlack);
        draw_sprite_and_not_7up(win, rect);
        if (rect.left <= 570) {
            is_over = true;
            rect.left = 1140;
        }
    }
    return 0;
}

int my_turn_page_right(window_t *win)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    sfIntRect rect = {570, 0, 182, 157};
    bool is_over = false;
    while (!is_over) {
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) >= 0.2) {
            rect.left += 190;
            sfClock_restart(clock);
        }
        sfRenderWindow_clear(win->win, sfBlack);
        draw_sprite_and_not_7up(win, rect);
        if (rect.left > 1080) {
            is_over = true;
            rect.left = 570;
        }
        sfRenderWindow_clear(win->win, sfBlack);
        draw_sprite_and_not_7up(win, rect);
    }
    return 0;
}
