/*
** EPITECH PROJECT, 2023
** func_obj_bis.c
** File description:
** fun
*/

#include "rpg.h"

void stun(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 7) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 7) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 7) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 20;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->stun, pos);
}

void gold(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 8) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 8) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 8) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 17;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->gold, pos);
}

void coal(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 9) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 9) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 9) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 17;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->coal, pos);
}

void kei(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 10) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 10) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 10) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 20;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->keyy, pos);
}
