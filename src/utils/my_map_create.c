/*
** EPITECH PROJECT, 2023
** my ma create
** File description:
** map create
*/

#include "map/map.h"
#include "rpg.h"

map_t my_map_create(void)
{
    char *map1 = "assets/maps/map_de_base.png";
    char *map2 = "assets/maps/map_de_base_WRGBY.png";
    map_t carte;

    memset(&carte, 0, sizeof(map_t));
    carte.texture_map = sfTexture_createFromFile(map1, NULL);
    carte.image_map = sfImage_createFromFile(map2);
    carte.sprite_map = sfSprite_create();
    sfSprite_setTexture(carte.sprite_map, carte.texture_map, sfTrue);
    return carte;
}
