/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** sound.c
*/

#include "rpg.h"

void init_sound_effect(general_t *all)
{
    SOUND = malloc(sizeof(sound_effect_t) * 3);
    SOUND[0].buffer =
    sfSoundBuffer_createFromFile("assets/charaters/sound_effect/sword.ogg");
    SOUND[1].buffer =
    sfSoundBuffer_createFromFile("assets/charaters/sound_effect/death.ogg");
    SOUND[2].buffer =
    sfSoundBuffer_createFromFile("assets/charaters/sound_effect/spike.ogg");

    for (int i = 0; i != 3; i++) {
        SOUND[i].sound_effect = sfSound_create();
        sfSound_setBuffer(SOUND[i].sound_effect, SOUND[i].buffer);
    }
}
