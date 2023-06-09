/*
** EPITECH PROJECT, 2023
** use item
** File description:
** true
*/

#include "rpg.h"

void use_item_all(general_t *all, int serie)
{
    if (serie == 1)
        event_potion_health(all);
    if (serie == 2)
        event_potion_exp(all);
    if (serie == 3)
        event_potion_speed(all);
    if (serie == 4)
        event_potion_guerison(all);
    if (serie == 5)
        event_fouet(all);
    if (serie == 6)
        event_glu(all);
    if (serie == 7)
        event_stun(all);
}

void number_two(general_t *all, int x, int y)
{
    if (x >= 1114 && x <= 1221 && y >= 754 && y <= 845
    && all->item->serie_2 == 0 &&
    all->inv->nbr_item[all->inv->walacpamoi][1] < 8) {
        sfText_setColor(all->inv->nbr_2, sfYellow);
        all->item->serie_2 = all->inv->nbr_item[all->inv->walacpamoi][1];
        all->item->nbr_s2 = all->inv->nbr_item[all->inv->walacpamoi][0];
        if (all->item->serie_2 == all->item->serie_1)
            all->item->serie_1 = 0;
        all->inv->nbr_item[all->inv->walacpamoi][1] = 0;
        all->inv->nbr_item[all->inv->walacpamoi][0] = 0;
    }
}

void number_one(general_t *all, int x, int y)
{
    if (x >= 962 && x <= 1062 && y >= 757 && y <= 844
    && all->item->serie_1 == 0 &&
    all->inv->nbr_item[all->inv->walacpamoi][1] < 8) {
        sfText_setColor(all->inv->nbr_1, sfYellow);
        all->item->serie_1 = all->inv->nbr_item[all->inv->walacpamoi][1];
        all->item->nbr_s1 = all->inv->nbr_item[all->inv->walacpamoi][0];
        if (all->item->serie_1 == all->item->serie_2)
            all->item->serie_2 = 0;
        all->inv->nbr_item[all->inv->walacpamoi][1] = 0;
        all->inv->nbr_item[all->inv->walacpamoi][0] = 0;
    }
}

void throw(general_t *all, int x, int y)
{
    if (x >= 711 && x <= 878 && y >= 819 && y <= 861) {
        sfText_setColor(all->inv->usy[1], sfYellow);
        if (all->inv->nbr_item[all->inv->walacpamoi][0] > 0)
            all->inv->nbr_item[all->inv->walacpamoi][0]--;
        if (all->inv->nbr_item[all->inv->walacpamoi][0] <= 0)
            all->inv->nbr_item[all->inv->walacpamoi][1] = 0;
    }
}

void alitem(general_t *all, int x, int y)
{
    if (x >= 708 && x <= 877 && y >= 752 && y <= 793 &&
    all->inv->nbr_item[all->inv->walacpamoi][1] < 8) {
        sfText_setColor(all->inv->usy[0], sfYellow);
        if (all->inv->nbr_item[all->inv->walacpamoi][0] > 0) {
            use_item_all(all, all->inv->nbr_item[all->inv->walacpamoi][1]);
            all->inv->nbr_item[all->inv->walacpamoi][0]--;
        }
        if (all->inv->nbr_item[all->inv->walacpamoi][0] <= 0)
            all->inv->nbr_item[all->inv->walacpamoi][1] = 0;
    }
    throw(all, x, y);
    number_one(all, x, y);
    number_two(all, x, y);
}
