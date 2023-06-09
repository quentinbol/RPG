/*
** EPITECH PROJECT, 2023
** my_rpg.h
** File description:
** main room
*/

#include "rpg.h"

void main_room_handling(general_t *all)
{
    for (int i = 0; i != 32; i++)
        sfSprite_setPosition(FIRE2[i].sprite, FIRE2[i].pos);
    for (int i = 0; i != 5; i++)
        sfSprite_setPosition(FIRE[i].sprite, FIRE[i].pos);
    for (int i = 0; i != 11; i++)
        sfSprite_setPosition(SPIKE[i].sprite, SPIKE[i].pos);
}
