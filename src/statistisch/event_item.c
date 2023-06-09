/*
** EPITECH PROJECT, 2023
** event_item
** File description:
** true
*/

#include "rpg.h"

void event_potion_health(general_t *all)
{
    if (all->item->hp_ninja == all->item->hp_max_ninja)
            return;
    if (all->item->serie_1 == 1) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 1) {
        if (all->item->nbr_s2 == 0)
            return;
    }

    all->item->hp_ninja = all->item->hp_ninja + 100;
    if (all->item->serie_1 == 1)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 1)
        all->item->nbr_s2--;

    if (all->item->hp_ninja > all->item->hp_max_ninja)
        all->item->hp_ninja = all->item->hp_max_ninja;
}

void event_potion_exp(general_t *all)
{
    if (all->item->serie_1 == 2) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 2) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 2)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 2)
        all->item->nbr_s2--;
    if (all->satt->levelup < 9) {
        all->satt->exp = 0;
        (all->satt->levelup)++;
        (all->satt->nbr_point)++;
    }

    if (all->satt->levelup > 9)
            all->satt->levelup = 9;
}

void event_potion_speed(general_t *all)
{
    if (all->item->serie_1 == 3) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 3) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 3)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 3)
        all->item->nbr_s2--;

    all->item->nemy = all->item->x + 400;
}

void event_potion_guerison(general_t *all)
{
    if (all->item->serie_1 == 4) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 4) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 4)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 4)
        all->item->nbr_s2--;

    all->item->hp_ninja = all->item->hp_max_ninja;
}

void event_fouet(general_t *all)
{
    if (all->item->serie_1 == 5) {
        if (all->item->nbr_s1 == 0)
            return;
    }
    if (all->item->serie_2 == 5) {
        if (all->item->nbr_s2 == 0)
            return;
    }
    if (all->item->serie_1 == 5)
        all->item->nbr_s1--;
    if (all->item->serie_2 == 5)
        all->item->nbr_s2--;

    all->objj->fouette = all->item->x + 150;
}
