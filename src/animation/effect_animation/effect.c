/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** effect
*/

#include "rpg.h"

void animation_spike(general_t *all, int i)
{
    int stop = 0;
    sfSprite_setTextureRect(SPIKE[i].sprite, SPIKE[i].rect);
    SPIKE[i].time = sfClock_getElapsedTime(SPIKE[i].clock);
    SPIKE[i].seconds = SPIKE[i].time.microseconds / 1000000.0;
    if (SPIKE[i].seconds > 0.05 && stop == 0) {
        TAKE_DAMAGE_SPIKE = true;
        if (SPIKE[i].rect.left >= 372) {
            TAKE_DAMAGE_SPIKE = false;
            SPIKE[i].rect.left = 372;
            stop = 1;
        } else {
            sfSound_play(all->anima->sound[2].sound_effect);
            SPIKE[i].rect.left += 41;
        }
        sfClock_restart(SPIKE[i].clock);
    }
}

void make_animation_effect(general_t *all)
{
    animation_fire(all);
    animation_fire_2(all);
    for (int i = 0; i != 11; i++)
        sfSprite_setTextureRect(SPIKE[i].sprite, SPIKE[i].rect);
}
