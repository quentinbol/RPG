/*
** EPITECH PROJECT, 2023
** my_map_destroy.c
** File description:
** to destroy the map
*/

#include "rpg.h"

int my_map_destroy(map_t *carte)
{
    sfTexture_destroy(carte->texture_map);
    sfImage_destroy(carte->image_map);
    sfSprite_destroy(carte->sprite_map);
    return 0;
}
