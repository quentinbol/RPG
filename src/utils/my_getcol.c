/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** get col
*/

#include "rpg.h"

bool check_collision_rect(sfRectangleShape* hitbox_ele,
                    sfRectangleShape* hitbox)
{
    sfFloatRect circle_bounds = sfRectangleShape_getGlobalBounds(hitbox_ele);
    sfFloatRect hitbox_bounds = sfRectangleShape_getGlobalBounds(hitbox);
    return sfFloatRect_intersects(&circle_bounds, &hitbox_bounds, NULL);
}

bool check_collision(sfCircleShape* circle, sfRectangleShape* hitbox)
{
    sfFloatRect circle_bounds = sfCircleShape_getGlobalBounds(circle);
    sfFloatRect hitbox_bounds = sfRectangleShape_getGlobalBounds(hitbox);
    return sfFloatRect_intersects(&circle_bounds, &hitbox_bounds, NULL);
}
