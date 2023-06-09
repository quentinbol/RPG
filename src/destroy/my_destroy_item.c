/*
** EPITECH PROJECT, 2023
** my_destroy_item.c
** File description:
** to destroy the struct item_t
*/

#include "rpg.h"

static int my_free_item_2(item_t *item)
{
    sfRectangleShape_destroy(item->lifebar_boss2);
    sfText_destroy(item->boss);
    free(item);
    return 0;
}

static int my_free_array_rect(sfRectangleShape **rect)
{
    for (int i = 0; rect[i]; i ++)
        sfRectangleShape_destroy(rect[i]);
    return 0;
}

int my_free_item(item_t *item)
{
    if (item == 0)
        return 0;
    sfRectangleShape_destroy(item->lifebar);
    sfRectangleShape_destroy(item->lifebar_bor);
    sfText_destroy(item->nbr_1);
    sfText_destroy(item->nbr_2);
    sfSprite_destroy(item->bordur);
    sfSprite_destroy(item->bordur_2);
    sfSprite_destroy(item->health_potion);
    sfSprite_destroy(item->damage_potion);
    sfTexture_destroy(item->tex_1);
    sfTexture_destroy(item->tex_2);
    sfTexture_destroy(item->tex_bor1);
    sfTexture_destroy(item->tex_bor2);
    sfFont_destroy(item->font);
    sfRectangleShape_destroy(item->lifebar_boss);
    my_free_item_2(item);
    return 0;
}

int my_free_satt(satt_t *satt)
{
    sfText_destroy(satt->level);
    sfText_destroy(satt->nbr_point_text);
    sfText_destroy(satt->healt);
    sfText_destroy(satt->damage);
    sfText_destroy(satt->speed);
    sfSprite_destroy(satt->plac);
    sfSprite_destroy(satt->heart);
    sfSprite_destroy(satt->sword);
    sfSprite_destroy(satt->booth);
    sfText_destroy(satt->level3);
    sfText_destroy(satt->lekel);
    sfRectangleShape_destroy(satt->expbar);
    sfRectangleShape_destroy(satt->expbar_bor);
    free(satt);
    return 0;
}
