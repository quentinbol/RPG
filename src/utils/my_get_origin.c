/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** function to get the origin of an item
*/

#include "rpg.h"

void get_origin(general_t *all, sfVector2f pos_sprite, int i)
{
    all->anima[i].shape = sfRectangleShape_create();
    sfRectangleShape_setSize(all->anima[i].shape, (sfVector2f){5.f, 5.f});
    sfRectangleShape_setFillColor(all->anima[i].shape, sfBlue);
    sfRectangleShape_setPosition(all->anima[i].shape, (sfVector2f)
                            {pos_sprite.x + all->anima[i].origin.x - 1.f,
                            pos_sprite.y + all->anima[i].origin.y - 1.f});
}
