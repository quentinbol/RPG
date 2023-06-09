/*
** EPITECH PROJECT, 2023
** destroy stat
** File description:
** true
*/

#include "rpg.h"

void destroy_statistisch(general_t *all)
{
    sfSprite_destroy(all->item->health_potion);
    sfSprite_destroy(all->item->damage_potion);
    sfSprite_destroy(all->item->bordur);
    sfSprite_destroy(all->item->bordur_2);
    sfRectangleShape_destroy(all->item->lifebar);
    sfRectangleShape_destroy(all->item->lifebar_bor);
    sfTexture_destroy(all->item->tex_1);
    sfTexture_destroy(all->item->tex_2);
    sfTexture_destroy(all->item->tex_bor1);
    sfTexture_destroy(all->item->tex_bor2);
    sfText_destroy(all->item->nbr_1);
    sfText_destroy(all->item->nbr_2);
    sfFont_destroy(all->item->font);
}
