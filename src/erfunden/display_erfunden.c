/*
** EPITECH PROJECT, 2023
** display inv
** File description:
** true
*/

#include "rpg.h"

void display_inv_a(window_t *win, general_t *all)
{
    sfRenderWindow_drawSprite(win->win, all->inv->erfunden, NULL);
    sfRenderWindow_drawSprite(win->win, all->item->health_potion, NULL);
    sfRenderWindow_drawSprite(win->win, all->inv->tex_bor1, NULL);
    sfRenderWindow_drawSprite(win->win, all->inv->tex_bor2, NULL);
    sfRenderWindow_drawText(win->win, all->inv->nbr_1, NULL);
    sfRenderWindow_drawText(win->win, all->inv->nbr_2, NULL);
    for (int a = 0; a != 2; a++) {
        sfRenderWindow_drawSprite(win->win, all->inv->plaky[a], NULL);
        sfRenderWindow_drawText(win->win, all->inv->usy[a], NULL);
    }
}
