/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** stat for main charater
*/

#include "rpg.h"

item_t *my_item_create(void)
{
    item_t *item = my_calloc(sizeof(item_t), 1);
}

obj_t *my_obj_create(void)
{
    obj_t *objj = my_calloc(sizeof(obj_t), 1);
}

satt_t *my_satt_create(void)
{
    satt_t *satt = my_calloc(sizeof(satt_t), 1);
}

void init_height(general_t *all)
{
    all->satt->expbar = sfRectangleShape_create();
    all->satt->expbar_bor = sfRectangleShape_create();
    sfRectangleShape_setPosition(all->satt->expbar, (V) {20, 70});
    sfRectangleShape_setPosition(all->satt->expbar_bor, (V) {20, 70});
    sfRectangleShape_setSize(all->satt->expbar, (V) {200, 20});
    sfRectangleShape_setSize(all->satt->expbar_bor, (V) {400, 20});
    sfRectangleShape_setFillColor(all->satt->expbar_bor, sfWhite);;
    sfRectangleShape_setFillColor(all->satt->expbar, sfBlue);
    init_all_obj(all);
}

void loop_lifebar(general_t *all)
{
    sfVector2f scale = {all->item->hp_ninja, 35};
    sfVector2f scale2 = {all->item->hp_max_ninja, 35};
    sfVector2f pos = {20, 20};
    sfRectangleShape_setSize(all->item->lifebar, scale);
    sfRectangleShape_setFillColor(all->item->lifebar, sfGreen);
    sfRectangleShape_setPosition(all->item->lifebar, (sfVector2f){20.f, 20.f});
    sfRectangleShape_setSize(all->item->lifebar_bor, scale2);
    sfRectangleShape_setOutlineThickness(all->item->lifebar_bor, 5);
    sfRectangleShape_setFillColor(all->item->lifebar_bor, sfRed);
    sfRectangleShape_setPosition(all->item->lifebar_bor, pos);
    sfVector2f cale = (V) {all->satt->exp, 20};
    sfRectangleShape_setSize(all->satt->expbar, cale);
    if (all->item->nbr_s1 <= 0)
        all->item->serie_1 = 0;
    if (all->item->nbr_s2 <= 0)
        all->item->serie_2 = 0;
    loop_sat(all);
    loop_obj(all);
    if (all->index_map == 4)
        boss_lifebar(all);
    loop_sat(all); loop_obj(all);
}
