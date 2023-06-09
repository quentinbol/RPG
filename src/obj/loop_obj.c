/*
** EPITECH PROJECT, 2023
** loop obj
** File description:
** true
*/

#include "rpg.h"

int tou(general_t *all, int serie)
{
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == serie)
            return a;
    }
    return 84;
}

void lopx(general_t *all)
{
    if (all->item->x < all->item->nemy)
        all->item->speeed = 500;
    if (all->item->x > all->item->nemy)
        all->item->speeed = 150 + (all->satt->speed_nbr * 30);
    if (all->item->x < all->objj->gluant)
        all->objj->spid = 0.5;
    if (all->item->x > all->objj->gluant && all->item->x > all->objj->cagelux)
        all->objj->spid = 2;
    if (all->item->x < all->objj->cagelux)
        all->objj->spid = 0;
    if (all->item->x > all->objj->cagelux && all->item->x > all->objj->gluant)
        all->objj->spid = 2;
    if (all->item->x < all->objj->fouette)
        all->item->damaje = 1.5;
    if (all->item->x > all->objj->fouette)
        all->item->damaje = 0.2 + (all->satt->damage_nbr * 0.03);
}

void loop_obj(general_t *all)
{
    lopx(all);
    exp_potion(all);
    speed_potion(all);
    guerison(all);
    fouet(all);
    glu(all);
    stun(all);
    gold(all);
    coal(all);
    kei(all);
    anal_profonde(all);
}
