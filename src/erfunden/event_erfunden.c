/*
** EPITECH PROJECT, 2023
** event inv
** File description:
** true
*/

#include "rpg.h"

void if_mosu(general_t *all, int x, int y)
{
    int p = all->inv->walacpamoi;
    for (int a = 0; a != 20; a++) {
        sfFloatRect bx = sfRectangleShape_getGlobalBounds(all->inv->cell[a]);
        if (x >= bx.left && x <= bx.left + 100 &&
            y >= bx.top && y <= bx.top + 100) {
                all->inv->walacpamoi = a;
                sfRectangleShape_setOutlineColor(all->inv->cell[a], sfYellow);
            }
        if (all->inv->walacpamoi != p) {
                sfRectangleShape_setOutlineColor(all->inv->cell[p], sfWhite);
            }
    }
}

void event_inv(window_t *win, general_t *all, int x, int y)
{
    int u = all->inv->walacpamoi;
    sfText_setColor(all->inv->usy[0], sfWhite);
    sfText_setColor(all->inv->usy[1], sfWhite);
    sfText_setColor(all->inv->nbr_1, sfRed);
    sfText_setColor(all->inv->nbr_2, sfRed);
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        sfRectangleShape_setOutlineColor(all->inv->cell[u], sfWhite);
        if (all->inv->boulo == 0) {
            all->inv->boulo = 84;
        } else
            all->inv->boulo = 0;
    }
    if_mosu(all, x, y);
    alitem(all, x, y);
}
