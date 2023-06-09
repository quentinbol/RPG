/*
** EPITECH PROJECT, 2023
** init_item.c
** File description:
** BY - CM
*/

#include "rpg.h"

void init_item(general_t *all)
{
    all->item->hp_ninja = 400;
    all->item->nbr_health_potion = 5;
    all->item->serie_1 = 0;
    all->item->serie_2 = 0;
    all->item->hp_max_ninja = 400;
    all->item->nbr_s1 = 0;
    all->item->nbr_s2 = 0;
    all->item->speeed = 150;
    all->item->damaje = 0.2;
    all->item->x = 0;
    all->item->nemy = -1;
}
