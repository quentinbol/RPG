/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** function general to create effect
*/

#include "rpg.h"

effect_fire_t *create_fire(general_t *all, int i, V pos)
{
    FIRE[i].sprite = my_get_sprite_animation(Fire);
    FIRE[i].clock = sfClock_create();
    FIRE[i].pos = pos;
    FIRE[i].seconds = 0;
    return FIRE;
}

effect_spike_t *create_spike(general_t *all, int i, V pos)
{
    SPIKE[i].sprite = my_get_sprite_animation(Spikes);
    SPIKE[i].clock = sfClock_create();
    SPIKE[i].pos = pos;
    SPIKE[i].seconds = 0;
    return SPIKE;
}

effect_fire2_t *create_fire_2(general_t *all, int i, V pos)
{
    all->effect->fire_2[i].sprite = my_get_sprite_animation(Fire2);
    all->effect->fire_2[i].clock = sfClock_create();
    all->effect->fire_2[i].pos = pos;
    FIRE2[i].seconds = 0;
    return all->effect->fire_2;
}
