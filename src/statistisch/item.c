/*
** EPITECH PROJECT, 2023
** item
** File description:
** true
*/

#include "rpg.h"

void loop_item(general_t *all)
{
    the_ath(all);
    health_potion(all);
}

void use_item_s1(general_t *all)
{
    if (all->item->serie_1 == 1)
        event_potion_health(all);
    if (all->item->serie_1 == 2)
        event_potion_exp(all);
    if (all->item->serie_1 == 3)
        event_potion_speed(all);
    if (all->item->serie_1 == 4)
        event_potion_guerison(all);
    if (all->item->serie_1 == 5)
        event_fouet(all);
    if (all->item->serie_1 == 6)
        event_glu(all);
    if (all->item->serie_1 == 7)
        event_stun(all);
}

void use_item_s2(general_t *all)
{
    if (all->item->serie_2 == 1)
        event_potion_health(all);
    if (all->item->serie_2 == 2)
        event_potion_exp(all);
    if (all->item->serie_2 == 3)
        event_potion_speed(all);
    if (all->item->serie_2 == 4)
        event_potion_guerison(all);
    if (all->item->serie_2 == 5)
        event_fouet(all);
    if (all->item->serie_2 == 6)
        event_glu(all);
    if (all->item->serie_2 == 7)
        event_stun(all);
}

void health_potion2(general_t *all, sfVector2f *pos)
{
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 1) {
            sfFloatRect bx = sfRectangleShape_getGlobalBounds
            (all->inv->cell[a]);
            pos->x = bx.left + 20;
            pos->y = bx.top + 20;
        }
    }
}

void health_potion(general_t *all)
{
    sfVector2f pos = {3000, 3000};
    if (all->item->serie_1 == 1) {
        pos.x = 1639;
        pos.y = 885;
    }
    if (all->item->serie_2 == 1) {
        pos.x = 1790;
        pos.y = 885;
    }
    health_potion2(all, &pos);
    sfVector2f scale = {0.2, 0.2};
    sfSprite_setTexture(all->item->health_potion, all->item->tex_1, sfTrue);
    sfSprite_setPosition(all->item->health_potion, pos);
    sfSprite_setScale(all->item->health_potion, scale);
}
