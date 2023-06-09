/*
** EPITECH PROJECT, 2023
** my_destroy_animation_effect.c
** File description:
** to free the animation effect struct
*/

#include "rpg.h"

static int my_free_effect_fire(effect_fire_t *fire)
{
    sfSprite_destroy(fire->sprite);
    sfTexture_destroy(fire->texture);
    sfClock_destroy(fire->clock);
    sfRectangleShape_destroy(fire->hitbox);
    free(fire);
    return 0;
}

static int my_free_effect_fire2(effect_fire2_t *fire_2)
{
    sfSprite_destroy(fire_2->sprite);
    sfClock_destroy(fire_2->clock);
    free(fire_2);
    return 0;
}

static int my_free_effect_spike(effect_spike_t *spike)
{
    sfSprite_destroy(spike->sprite);
    sfTexture_destroy(spike->texture);
    sfClock_destroy(spike->clock);
    sfRectangleShape_destroy(spike->hitbox);
    free(spike);
    return 0;
}

int my_free_animation_effect(animation_effect_t *effect)
{
    my_free_effect_fire(effect->fire);
    my_free_effect_fire2(effect->fire_2);
    my_free_effect_spike(effect->spike);
    free(effect);
    return 0;
}
