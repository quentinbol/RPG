/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** algo for movement
*/

#include "rpg.h"

sfVector2f velocity[MAX_ENEMY_COUNT] = { {0.0f, 0.0f} };

void enemy_random_mov(general_t *all, int i, int state, map_t *carte)
{
    if (!__AGRO_HITBOX && !__ATTACK_HITBOX) {
        ENEMY[i].fight->time_since_last_random_move +=
                    sfTime_asSeconds(ENEMY[i].move->time_enemy);
        ENEMY[i].fight->time_since_last_random_move =
                    ENEMY[i].fight->time_since_last_random_move;
        if (ENEMY[i].fight->i == 1)
            enemy_pause(all, i);
        choose_random_path(all, i, state);
        if (ENEMY[i].fight->time_since_stopped >= 10)
            enemy_is_thinking(all, i, state);
    }
    enemy_border(all, i, carte);
    update_enemy_mov(all, i, state);
}

void enemy_is_thinking(general_t *all, int i, int state)
{
    if (state == 1)
        animation_enemy_not_moving(all, i, i + 1);
    if (state == 2)
        animation_golem_not_moving(all, i, i + 1);
    if (state == 3)
        animation_giant_not_moving(all, i, i + 1);
    ENEMY[i].fight->i = 1;
    ENEMY[i].fight->time_since_stopped = 0.0f;
    sfClock_restart(ENEMY[i].move->clock_time);
}

void choose_random_path(general_t *all, int i, int state)
{
    const float max_random_move_time = 500.0f;
    if (ENEMY[i].fight->time_since_last_random_move >= max_random_move_time
            && ENEMY[i].fight->i == 0) {
        if (state == 1)
            animation_enemy_moving(all, i, i + 1);
        if (state == 2)
            animation_golem_moving(all, i, i + 1);
        if (state == 3)
            animation_giant_moving(all, i, i + 1);
        change_direction(all, i);
        sfVector2f new_vel = sfvectorf_normalize(ENEMY[i].move->new_direction);
        if (state == 1)
            velocity[i] = sfvectorf_multiply(new_vel, 10.0);
        if (state == 2 || state == 3)
            velocity[i] = sfvectorf_multiply(new_vel, 3.0);
        ENEMY[i].fight->time_since_last_random_move = 0.0f;
        ENEMY[i].fight->time_since_stopped +=
            sfTime_asSeconds(ENEMY[i].move->time_enemy);
    }
}

void update_enemy_mov(general_t *all, int i, int state)
{
    if (ENEMY[i].fight->i != 1) {
        if (state == 1)
            animation_enemy_moving(all, i, i + 1);
        if (state == 2)
            animation_golem_moving(all, i, i + 1);
        if (state == 3)
            animation_giant_moving(all, i, i + 1);
        sfVector2f del_pos =
        sfvectorf_multiply(velocity[i], sfTime_asSeconds(clock_[i + 1].time));
        ENEMY[i].move->enemie_pos =
            sfvectorf_add(ENEMY[i].move->enemie_pos, del_pos);
        if (!ENEMY[i].state->walk) {
            take_other_direction(all, i, state);
        }
        sfSprite_setPosition(ENEMY[i].sprite->chara, ENEMY[i].move->enemie_pos);
    }
}

void take_other_direction(general_t *all, int i, int state)
{
    change_direction(all, i);
    sfVector2f new_vel = sfvectorf_normalize(ENEMY[i].move->new_direction);
    if (state == 1)
        velocity[i] = sfvectorf_multiply(new_vel, 10.0);
    if (state == 2)
        velocity[i] = sfvectorf_multiply(new_vel, 3.0);
        sfVector2f del_pos =
        sfvectorf_multiply(velocity[i], sfTime_asSeconds(clock_[i + 1].time));
        ENEMY[i].move->enemie_pos =
        sfvectorf_add(ENEMY[i].move->enemie_pos, del_pos);
}
