/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** event for player
*/

#include "rpg.h"

void event_player_dead(general_t *all)
{
    DEAD = true;
    sfSound_play(all->anima->sound[1].sound_effect);
}

void event_player_attack(general_t *all)
{
    all->anima[0].sprite->rect.left = 10;
    ATTACK = true;
    sfSound_play(all->anima->sound[0].sound_effect);
}
