/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** create_enemy
*/

#include "rpg.h"

animation_t *create_enemy(general_t *all, V size, V pos, int i)
{
    create_enemy_struct(all, i);
    ENEMY[i].i = 0;
    ENEMY[i].sprite->size = size;
    ENEMY[i].sprite->pos = pos;
    ENEMY[i].sprite->chara = my_get_sprite_animation(Viking);
    ENEMY[i].state->is_running = false;
    ENEMY[i].state->is_dead = false;
    ENEMY[i].state->is_attacking = false;
    ENEMY[i].state->restart = false;
    ENEMY[i].state->spawn = false;
    ENEMY[i].number_of_frame = 0;
    ENEMY[i].fight->time_since_last_random_move = 0.0f;
    ENEMY[i].fight->time_since_stopped = 0.0f;
    ENEMY[i].fight->stop_time = 0.0f;
    ENEMY[i].fight->i = 0;
    ENEMY[i].move->clock_time = sfClock_create();
    ENEMY[i].move->stop_time = sfClock_create();
    ENEMY[i].state->walk = false;
    return all->anima;
}

animation_t *create_golem(general_t *all, V size, V pos, int i)
{
    create_enemy_struct(all, i);
    ENEMY[i].i = 0;
    ENEMY[i].sprite->size = size;
    ENEMY[i].sprite->pos = pos;
    ENEMY[i].sprite->chara = my_get_sprite_animation(Golem);
    ENEMY[i].state->is_running = false;
    ENEMY[i].state->is_dead = false;
    ENEMY[i].state->is_attacking = false;
    ENEMY[i].state->restart = false;
    ENEMY[i].number_of_frame = 0;
    ENEMY[i].fight->time_since_last_random_move = 0.0f;
    ENEMY[i].fight->time_since_stopped = 0.0f;
    ENEMY[i].fight->stop_time = 0.0f;
    ENEMY[i].fight->i = 0;
    ENEMY[i].move->clock_time = sfClock_create();
    ENEMY[i].move->stop_time = sfClock_create();
    ENEMY[i].state->walk = false;
    return all->anima;
}

animation_t *create_giant(general_t *all, V size, V pos, int i)
{
    create_enemy_struct(all, i);
    ENEMY[i].i = 0;
    ENEMY[i].sprite->size = size;
    ENEMY[i].sprite->pos = pos;
    ENEMY[i].sprite->chara = my_get_sprite_animation(Giant);
    ENEMY[i].state->is_running = false;
    ENEMY[i].state->is_dead = false;
    ENEMY[i].state->is_attacking = false;
    ENEMY[i].state->restart = false;
    ENEMY[i].number_of_frame = 0;
    ENEMY[i].fight->time_since_last_random_move = 0.0f;
    ENEMY[i].fight->time_since_stopped = 0.0f;
    ENEMY[i].fight->stop_time = 0.0f;
    ENEMY[i].fight->i = 0;
    ENEMY[i].move->clock_time = sfClock_create();
    ENEMY[i].move->stop_time = sfClock_create();
    ENEMY[i].state->walk = false;
    return all->anima;
}
