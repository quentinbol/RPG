/*
** EPITECH PROJECT, 2023
** display stat
** File description:
** true
*/

#include "rpg.h"

void display_sat(window_t *win, general_t *all)
{
    sfRenderWindow_drawText(win->win, all->satt->level, NULL);
    sfRenderWindow_drawText(win->win, all->satt->level3, NULL);
    sfRenderWindow_drawText(win->win, all->satt->lekel, NULL);
    sfRenderWindow_drawText(win->win, all->satt->nbr_point_text, NULL);
    RECT(win->win, all->satt->expbar_bor, NULL);
    RECT(win->win, all->satt->expbar, NULL);
}

void display_ut(window_t *win, general_t *all)
{
    voidyy(win, all);
    if (all->index_map == 1) {
        for (int a = 0; a != 5; a++) {
            RECT(win->win, all->item->lif[a], NULL);
            RECT(win->win, all->item->lif_go[a], NULL);
            RECT(win->win, all->item->lif_go2[a], NULL);
        }
        RECT(win->win, all->item->lif[22], NULL);
        RECT(win->win, all->item->lif_go[22], NULL);
        RECT(win->win, all->item->lif_go2[22], NULL);
    } else
        index_more(all, win);
    szde(win, all);
}

void display_hut(window_t *win, general_t *all)
{
    sfRenderWindow_drawRectangleShape(win->win, all->item->lifebar_bor, NULL);
    sfRenderWindow_drawRectangleShape(win->win, all->item->lifebar, NULL);
    sfRenderWindow_drawSprite(win->win, all->item->bordur, NULL);
    sfRenderWindow_drawSprite(win->win, all->item->bordur_2, NULL);
    sfRenderWindow_drawText(all->win->win, all->name->username, NULL);
    if (all->item->nbr_health_potion > 0) {
        if (all->item->serie_1 == 1 || all->item->serie_2 == 1)
            sfRenderWindow_drawSprite(win->win, all->item->health_potion, NULL);
    }
    sfRenderWindow_drawText(win->win, all->item->nbr_1, NULL);
    sfRenderWindow_drawText(win->win, all->item->nbr_2, NULL);
    display_ut(win, all);
}
