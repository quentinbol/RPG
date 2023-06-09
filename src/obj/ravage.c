/*
** EPITECH PROJECT, 2023
** ravage
** File description:
** true
*/

#include "rpg.h"

void ravage4(general_t *all, float x, float y)
{
    if (x > 88 && x < 134 && y > 418 && y < 454
    && all->objj->anal[11][1] == 0 && all->index_map == 3) {
        all->objj->trou = 1;
        all->objj->anal[11][0] = 1;
    }
    if (x > 6 && x < 118 && y > 17 && y < 116
    && all->objj->anal[12][1] == 0 && all->index_map == 3) {
        all->objj->trou = 1;
        all->objj->anal[12][0] = 1;
    }
    if (x > 1214 && x < 1379 && y > 173 && y < 304
    && all->objj->anal[13][1] == 0 && all->index_map == 3) {
        all->objj->trou = 1;
        all->objj->anal[13][0] = 1;
    }
    if (x > 1369 && x < 1509 && y > 653 && y < 767
    && all->objj->anal[14][1] == 0 && all->index_map == 4) {
        all->objj->trou = 1;
        all->objj->anal[14][0] = 1;
    }
}

void ravage3(general_t *all, float x, float y)
{
    if (x > 1066 && x < 1095 && y > 600 && y < 634
    && all->objj->anal[7][1] == 0 && all->index_map == 2) {
        all->objj->trou = 1;
        all->objj->anal[7][0] = 1;
    }
    if (x > 1101 && x < 1195 && y > 506 && y < 626
    && all->objj->anal[8][1] == 0 && all->index_map == 2) {
        all->objj->trou = 1;
        all->objj->anal[8][0] = 1;
    }
    if (x > 509 && x < 666 && y > 60 && y < 180
    && all->objj->anal[9][1] == 0 && all->index_map == 3) {
        all->objj->trou = 1;
        all->objj->anal[9][0] = 1;
    }
    if (x > 27 && x < 134 && y > 661 && y < 775
    && all->objj->anal[10][1] == 0 && all->index_map == 3) {
        all->objj->trou = 1;
        all->objj->anal[10][0] = 1;
    }
}

void ravage2(general_t *all, float x, float y)
{
    if (x > 108 && x < 159 && y > 402 && y < 436
    && all->objj->anal[3][1] == 0 && all->index_map == 1) {
        all->objj->trou = 1;
        all->objj->anal[3][0] = 1;
    }
    if (x > 793 && x < 859 && y > 271 && y < 310
    && all->objj->anal[4][1] == 0 && all->index_map == 2) {
        all->objj->trou = 1;
        all->objj->anal[4][0] = 1;
    }
    if (x > 612 && x < 654 && y > 585 && y < 621
    && all->objj->anal[5][1] == 0 && all->index_map == 2) {
        all->objj->trou = 1;
        all->objj->anal[5][0] = 1;
    }
    if (x > 636 && x < 677 && y > 511 && y < 583
    && all->objj->anal[6][1] == 0 && all->index_map == 2) {
        all->objj->trou = 1;
        all->objj->anal[6][0] = 1;
    }
}

void ravage(general_t *all, float x, float y)
{
    if (x > 340 && x < 380 && y > 340 && y < 380
    && all->objj->anal[0][1] == 0 && all->index_map == 1) {
        all->objj->trou = 1;
        all->objj->anal[0][0] = 1;
    }
    if (x > 380 && x < 420 && y > 340 && y < 380
    && all->objj->anal[1][1] == 0 && all->index_map == 1) {
        all->objj->trou = 1;
        all->objj->anal[1][0] = 1;
    }
    if (x > 252 && x < 302 && y > 344 && y < 383
    && all->objj->anal[2][1] == 0 && all->index_map == 1) {
        all->objj->trou = 1;
        all->objj->anal[2][0] = 1;
    }
    ravage2(all, x, y);
    ravage3(all, x, y);
    ravage4(all, x, y);
}

void anal_profonde(general_t *all)
{
    all->objj->trou = 0;
    for (int a = 0; a != 100; a++)
        all->objj->anal[a][0] = 0;
    sfFloatRect bx = sfSprite_getGlobalBounds(all->anima->sprite->chara);
    sfSprite_setPosition(all->objj->ko, (V) {bx.left + 20, bx.top - 40});
    ravage(all, bx.left + 50, bx.top + 60);
}
