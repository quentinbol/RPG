/*
** EPITECH PROJECT, 2023
** create_enemy_bis.c
** File description:
** BY - BQ
*/

#include "rpg.h"

void create_enemy_struct(general_t *all, int i)
{
    all->anima[i].fight = malloc(sizeof(fight_t));
    all->anima[i].move = malloc(sizeof(movement_t));
    all->anima[i].sprite = malloc(sizeof(sprite_t));
    all->anima[i].state = malloc(sizeof(state_t));
}

sfIntRect init_enemy_rect(sfIntRect rect)
{
    rect.top = 10;
    rect.height = 25;
    rect.width = 20;
    rect.left = 0;

    return rect;
}

sfIntRect init_golem_rect(sfIntRect rect)
{
    rect.top = 9;
    rect.height = 50;
    rect.width = 65;
    rect.left = 0;

    return rect;
}

sfIntRect init_giant_rect(sfIntRect rect)
{
    rect.top = 15;
    rect.height = 42;
    rect.width = 50;
    rect.left = 0;

    return rect;
}

sfIntRect init_pnj_rect(sfIntRect rect)
{
    rect.top = 30;
    rect.height = 25;
    rect.width = 40;
    rect.left = 10;

    return rect;
}
