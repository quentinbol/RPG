/*
** EPITECH PROJECT, 2023
** satt
** File description:
** true
*/

#include "rpg.h"

void voidyy(window_t *win, general_t *all)
{
    sfRenderWindow_drawSprite(win->win, all->satt->plac, NULL);
    sfRenderWindow_drawSprite(win->win, all->satt->heart, NULL);
    sfRenderWindow_drawSprite(win->win, all->satt->sword, NULL);
    sfRenderWindow_drawSprite(win->win, all->satt->booth, NULL);
    sfRenderWindow_drawText(win->win, all->satt->healt, NULL);
    sfRenderWindow_drawText(win->win, all->satt->damage, NULL);
    sfRenderWindow_drawText(win->win, all->satt->speed, NULL);
}

void szde(window_t *win, general_t *all)
{
    if (all->item->we_boss == 84) {
        RECT(win->win, all->item->lifebar_boss2, NULL);
        RECT(win->win, all->item->lifebar_boss, NULL);
        sfRenderWindow_drawText(win->win, all->item->boss, NULL);
    }
    display_sat(win, all);
}
