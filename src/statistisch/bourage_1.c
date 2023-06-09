/*
** EPITECH PROJECT, 2023
** satt
** File description:
** true
*/

#include "rpg.h"

void bourage_1(general_t *all)
{
    if (all->satt->ath_sat == 84) {
        sfSprite_setPosition(all->satt->plac, (V) {1480, 50});
        sfSprite_setPosition(all->satt->heart, (V) {1620, 120});
        sfSprite_setPosition(all->satt->sword, (V) {1600, 180});
        sfSprite_setPosition(all->satt->booth, (V) {1600, 300});
        sfText_setPosition(all->satt->healt, (V) {1700, 100});
        sfText_setPosition(all->satt->damage, (V) {1700, 190});
        sfText_setPosition(all->satt->speed, (V) {1700, 300});
        sfText_setPosition(all->satt->level, (V) {1800, 200});
        sfText_setPosition(all->satt->nbr_point_text, (V) {1550, 200});
    }
}

void event_glu(general_t *all)
{
    if (all->item->serie_1 == 6) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 6) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 6)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 6)
        all->item->nbr_s2--;

    all->objj->gluant = all->item->x + 400;
}

void event_stun(general_t *all)
{
    if (all->item->serie_1 == 7) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 7) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 7)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 7)
        all->item->nbr_s2--;

    all->objj->cagelux = all->item->x + 400;
}

void bojiko(window_t *win, general_t *all)
{
    if (all->index_map == 3)
        for (int a = 5; a != 12; a++) {
            RECT(win->win, all->item->lif[a], NULL);
            RECT(win->win, all->item->lif_go[a], NULL);
            RECT(win->win, all->item->lif_go2[a], NULL);
        }
}
