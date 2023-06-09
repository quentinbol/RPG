/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** function to init rect for effect
*/

#include "rpg.h"

sfIntRect init_fire2_rect(sfIntRect rect)
{
    rect.top = 55;
    rect.height = 210;
    rect.width = 100;
    rect.left = 55;

    return rect;
}

sfIntRect init_fire_rect(sfIntRect rect)
{
    rect.top = 10;
    rect.height = 110;
    rect.width = 70;
    rect.left = 0;

    return rect;
}

sfIntRect init_spike_rect(sfIntRect rect)
{
    rect.top = 260;
    rect.height = 120;
    rect.width = 41;
    rect.left = 210;

    return rect;
}
