/*
** EPITECH PROJECT, 2023
** boss_lifebar
** File description:
** true
*/

#include "rpg.h"

void boss_lifebar(general_t *all)
{
    if (all->item->we_boss == 0)
        all->item->we_boss = 84;
}

void loop_boss(general_t *all)
{
    all->item->scale_boss.x -= 0.1;
    if (all->item->scale_boss.x < 20)
        all->item->scale_boss.x = 0;
}

void name_boss(general_t *all)
{
    sfText_setFont(all->item->boss, all->item->font);
    sfText_setString(all->item->boss, "GroCaillou");
    sfText_setPosition(all->item->boss, (V) {850, 840});
    sfText_setScale(all->item->boss, (V) {2, 2});
    sfText_setColor(all->item->boss, sfRed);
    sfText_setOutlineThickness(all->item->boss, 1.5);
    sfText_setOutlineColor(all->item->boss, sfWhite);
}

void init_boss_lifebar(general_t *all)
{
    all->item->we_boss = 0;
    all->item->boss = sfText_create();
    all->item->lifebar_boss = sfRectangleShape_create();
    all->item->lifebar_boss2 = sfRectangleShape_create();
    all->item->scale_boss = (V) {1000, 30};
    sfRectangleShape_setSize(all->item->lifebar_boss, all->item->scale_boss);
    sfRectangleShape_setFillColor(all->item->lifebar_boss, sfGreen);
    sfRectangleShape_setPosition(all->item->lifebar_boss, (V) {450, 930});
    sfRectangleShape_setSize(all->item->lifebar_boss2, all->item->scale_boss);
    sfRectangleShape_setFillColor(all->item->lifebar_boss2, sfRed);
    sfRectangleShape_setOutlineThickness(all->item->lifebar_boss2, 5);
    sfRectangleShape_setOutlineColor(all->item->lifebar_boss2, sfMagenta);
    sfRectangleShape_setPosition(all->item->lifebar_boss2, (V) {450, 930});
    name_boss(all);
}
