/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** create_ninja
*/

#include "rpg.h"

void create_ninja(general_t *all)
{
    NINJA[0].i = 0;
    NINJA[0].sprite->size = (V) {0.5, 0.5};
    NINJA[0].sprite->pos = (V) {140, 900};
    NINJA[0].sprite->chara = my_get_sprite_animation(Ninja);
    NINJA[0].state->is_running = false;
    NINJA[0].state->is_dead = false;
    NINJA[0].state->is_attacking = false;
    NINJA[0].state->is_currently_attacking = false;
    NINJA[0].state->is_taking_damage = false;
    NINJA[0].state->is_taking_big_damage = false;
    NINJA[0].state->restart = false;
    NINJA[0].state->is_taking_damage_spike = false;
}

animation_t *create_pnj(general_t *all, sfVector2f size, sfVector2f pos, int i)
{
    all->anima[i].fight = malloc(sizeof(fight_t));
    all->anima[i].move = malloc(sizeof(movement_t));
    all->anima[i].sprite = malloc(sizeof(sprite_t));
    all->anima[i].state = malloc(sizeof(state_t));
    PNJ[i].sprite->pos = pos;
    PNJ[i].sprite->size = size;
    PNJ[i].sprite->chara = my_get_sprite_animation(Pnj);
    PNJ[i].state->talk_to_you = false;
    PNJ[i].quest = NULL;
    return all->anima;
}
