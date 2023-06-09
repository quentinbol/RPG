/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** create_hitbox
*/

#include "rpg.h"

sfCircleShape *create_agro_hitbox(general_t *all, sfCircleShape *agro_hitbox
                            , sfVector2f pos, float size)
{
    agro_hitbox = sfCircleShape_create();
    sfCircleShape_setRadius(agro_hitbox, size);
    sfCircleShape_setFillColor(agro_hitbox, sfTransparent);
    sfCircleShape_setPosition(agro_hitbox, (V) {pos.x - 250, pos.y - 250});
    sfCircleShape_setOutlineColor(agro_hitbox, sfWhite);
    sfCircleShape_setOutlineThickness(agro_hitbox, 2);
    return agro_hitbox;
}

sfCircleShape *create_attack_range(general_t *all, sfCircleShape *attack_range
                            , sfVector2f pos, float size)
{
    attack_range = sfCircleShape_create();
    sfCircleShape_setRadius(attack_range, size);
    sfCircleShape_setFillColor(attack_range, sfTransparent);
    sfCircleShape_setPosition(attack_range, (V) {pos.x, pos.y - 25});
    sfCircleShape_setOutlineColor(attack_range, sfWhite);
    sfCircleShape_setOutlineThickness(attack_range, 2);
    return attack_range;
}

sfRectangleShape *create_hitbox(general_t *all, sfRectangleShape *hitbox,
                                sfVector2f pos, sfVector2f size)
{
    hitbox = sfRectangleShape_create();
    sfRectangleShape_setSize(hitbox, size);
    sfRectangleShape_setScale(hitbox, (V) {1, 1});
    sfRectangleShape_setFillColor(hitbox, sfTransparent);
    sfRectangleShape_setPosition(hitbox, (V) {pos.x, pos.y - 40});
    sfRectangleShape_setOutlineColor(hitbox, sfWhite);
    sfRectangleShape_setOutlineThickness(hitbox, 2);
    return hitbox;
}
