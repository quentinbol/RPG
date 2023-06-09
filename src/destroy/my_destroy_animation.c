/*
** EPITECH PROJECT, 2023
** my_destroy_animation.c
** File description:
** to destroy the animations struct
*/

#include "rpg.h"

static int my_free_clock(clock_struct *clock)
{
    if (clock == 0)
        return 0;
    sfClock_destroy(clock->clock_item);
    free(clock);
    return 0;
}

static int my_free_sound_effect(sound_effect_t *sound)
{
    if (sound == 0)
        return 0;
    sfSoundBuffer_destroy(sound->buffer);
    sfSound_destroy(sound->sound_effect);
    free(sound);
    return 0;
}

static int my_free_fight(fight_t *fight)
{
    if (fight == 0)
        return 0;
    sfCircleShape_destroy(fight->attack_range);
    free(fight);
    return 0;
}

int my_free_animation(animation_t *anima)
{
    if (anima == 0)
        return 0;
    my_free_clock(anima->clock_create);
    my_free_sound_effect(anima->sound);
    my_free_fight(anima->fight);
    free(anima);
    return 0;
}
