/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** state aniamtion [running - not moving - attacking - dead]
*/

#include "rpg.h"

void animation_ninja_not_moving(general_t *all)
{
    NINJA[0].sprite->rect.top = 104;
    NINJA[0].sprite->rect.width = 300;
    if (NINJA->clock_create[0].seconds > 0.15) {
        if (NINJA[0].sprite->rect.left > 2300)
            NINJA[0].sprite->rect.left = 10;
        else
            NINJA[0].sprite->rect.left += 288;
        sfClock_restart(NINJA->clock_create[0].clock_item);
    }
}

void animation_ninja_attacking(general_t *all)
{
    ATTACK = true;
    NINJA[0].sprite->rect.top = 1804;
    if (NINJA->clock_create[0].seconds > 0.10) {
        if (NINJA[0].sprite->rect.left > 800) {
            ATTACK = false;
        } else {
            NINJA[0].sprite->rect.left += 288;
        }
        sfClock_restart(NINJA->clock_create[0].clock_item);
    }
}

void animation_ninja_running(general_t *all)
{
    NINJA[0].sprite->rect.top = 404;
    if (NINJA->clock_create[0].seconds > 0.1) {
        if (NINJA[0].sprite->rect.left > 2000)
            NINJA[0].sprite->rect.left = 10;
        else
            NINJA[0].sprite->rect.left += 288;
        sfClock_restart(NINJA->clock_create[0].clock_item);
    }
}

void animation_ninja_dead(general_t *all)
{
    NINJA[0].sprite->rect.top = 2404;
    if (NINJA->clock_create[0].seconds > 0.1) {
        if (NINJA[0].sprite->rect.left > 1700) {
        } else {
            NINJA[0].sprite->rect.left += 288;
        }
        sfClock_restart(NINJA->clock_create[0].clock_item);
    }
}

void ninja_currently_attacking(general_t *all)
{
    NINJA[0].number_of_frame++;
    if (NINJA[0].number_of_frame == 4) {
        CURRENTLY_ATTACKING = false;
        NINJA[0].number_of_frame = 0;
    }
}
