/*
** EPITECH PROJECT, 2023
** my_get_sprite.c
** File description:
** to create a sprite
*/

#include "rpg.h"

sfSprite *my_get_sprite_animation(char *filepath)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *textu = sfTexture_createFromFile(filepath, NULL);
    if (textu == NULL)
        return NULL;
    sfSprite_setTexture(sprite, textu, sfTrue);
    return sprite;
}

sfSprite *my_get_sprite(char *filepath, sfVector2f pos, sfVector2f scale)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *textu = sfTexture_createFromFile(filepath, NULL);

    if (textu == NULL)
        return NULL;
    sfSprite_setTexture(sprite, textu, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    return sprite;
}
