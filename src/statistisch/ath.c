/*
** EPITECH PROJECT, 2023
** ath
** File description:
** true
*/

#include "rpg.h"

void the_ath(general_t *all)
{
    sfVector2f pos = {1600, 850};
    sfVector2f pos_2 = {1750, 850};
    sfVector2f scale = {1.5, 1.5};
    sfSprite_setTexture(all->item->bordur, all->item->tex_bor1, sfTrue);
    sfSprite_setPosition(all->item->bordur, pos);
    sfSprite_setScale(all->item->bordur, scale);
    sfSprite_setTexture(all->item->bordur_2, all->item->tex_bor2, sfTrue);
    sfSprite_setPosition(all->item->bordur_2, pos_2);
    sfSprite_setScale(all->item->bordur_2, scale);


    text_ath_1(all);
    text_ath_2(all);
}

void transf_1(general_t *all, char *str)
{
    if (all->item->serie_1 == 0)
        str[0] = '0';
    str[0] = all->item->nbr_s1 + 48;
}

void transf_2(general_t *all, char *str)
{
    if (all->item->serie_2 == 0)
        str[0] = '0';
    str[0] = all->item->nbr_s2 + 48;
}

void text_ath_1(general_t *all)
{
    char *str = malloc(sizeof(char) * 2);
    transf_1(all, str);
    str[1] = '\0';
    sfVector2f poss = {1690, 840};
    sfVector2f scales = {1.6, 1.6};
    sfText_setFont(all->item->nbr_1, all->item->font);
    sfText_setString(all->item->nbr_1, str);
    sfText_setPosition(all->item->nbr_1, poss);
    sfText_setScale(all->item->nbr_1, scales);
    sfText_setColor(all->item->nbr_1, sfRed);
    sfText_setOutlineThickness(all->item->nbr_1, 1.5);
    sfText_setOutlineColor(all->item->nbr_1, sfWhite);
    free(str);
}

void text_ath_2(general_t *all)
{
    char *str = malloc(sizeof(char) * 2);
    transf_2(all, str);
    str[1] = '\0';
    sfVector2f poss = {1844, 840};
    sfVector2f scales = {1.6, 1.6};
    sfText_setFont(all->item->nbr_2, all->item->font);
    sfText_setString(all->item->nbr_2, str);
    sfText_setPosition(all->item->nbr_2, poss);
    sfText_setScale(all->item->nbr_2, scales);
    sfText_setColor(all->item->nbr_2, sfRed);
    sfText_setOutlineThickness(all->item->nbr_2, 1.5);
    sfText_setOutlineColor(all->item->nbr_2, sfWhite);
    free(str);
}
