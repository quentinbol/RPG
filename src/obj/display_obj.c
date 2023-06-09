/*
** EPITECH PROJECT, 2023
** display obj
** File description:
** true
*/

#include "rpg.h"

void display_obj(window_t *win, general_t *all)
{
    sfRenderWindow_drawSprite(win->win, all->objj->exp_potion, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->speed_potion, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->guerison, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->fouet, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->glu, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->stun, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->gold, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->coal, NULL);
    sfRenderWindow_drawSprite(win->win, all->objj->keyy, NULL);
    if (all->objj->trou == 1)
        sfRenderWindow_drawSprite(win->win, all->objj->ko, NULL);
    for (int a = 0; a != 20; a++) {
        sfRenderWindow_drawRectangleShape(win->win, all->inv->cell[a], NULL);
        sfRenderWindow_drawText(win->win, all->inv->nbr_cell[a], NULL);
    }
}
