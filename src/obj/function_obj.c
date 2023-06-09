/*
** EPITECH PROJECT, 2023
** function obj
** File description:
** true
*/

#include "rpg.h"

void exp_potion(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 2) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 2) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 2) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 20;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->exp_potion, pos);
}

void speed_potion(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 3) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 3) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 3) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 20;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->speed_potion, pos);
}

void guerison(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 4) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 4) {
        pos.x = 1790;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 4) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 20;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->guerison, pos);
}

void fouet(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 5) {
        pos.x = 1619;
        pos.y = 885;
    }
    if (all->item->serie_2 == 5) {
        pos.x = 1770;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 5) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 10;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->fouet, pos);
}

void glu(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 6) {
        pos.x = 1649;
        pos.y = 885;
    }
    if (all->item->serie_2 == 6) {
        pos.x = 1800;
        pos.y = 885;
    }
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 6) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos.x = bx.left + 25;
            pos.y = bx.top + 20;
        }
    }
    sfSprite_setPosition(all->objj->glu, pos);
}
