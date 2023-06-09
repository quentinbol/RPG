/*
** EPITECH PROJECT, 2023
** colision
** File description:
** colision
*/

#include "rpg.h"

void check_colision_elements(general_t *all)
{
    for (int i = 0; i != 5; i++) {
        if (check_collision_rect(all->effect->fire[i].hitbox,
            NINJA[0].fight->hitbox) && FIRE[i].take_fire_dmg) {
            FIRE[i].inflict_damage = true;
        } else {
            FIRE[i].inflict_damage = false;
        }
    }
    for (int i = 0; i != 11; i++) {
        if (check_collision_rect(all->effect->spike[i].hitbox,
                NINJA[0].fight->hitbox)) {
            animation_spike(all, i);
        } else {
            all->effect->spike[i].rect.left = 210;
        }
    }
}

void if_attack_player(general_t *all, int i, int state)
{
    if (__ATTACK_HITBOX && !ENEMY[i].state->is_dead) {
        if (state == 1)
            animation_enemy_attacking(all, i, i + 1);
        if (state == 2)
            animation_golem_attacking(all, i, i + 1);
        if (state == 3)
            animation_giant_attacking(all, i, i + 1);
        ENEMY[i].fight->i = 1;
    }
}

void check_different_collision(general_t *all, int i, int state, map_t *carte)
{
    if (ENEMY[i].state->is_dead) {
        if (i < 16)
            animation_enemy_dead(all, i, i + 1);
        if (i == 22 || i == 23)
            animation_giant_death(all, i, i + 1);
        if (i >= 16 && i < 22)
            animation_golem_dead(all, i, i + 1);
    }
    check_colision_elements(all);
    if (check_collision(NINJA[0].fight->attack_range,
            ENEMY[i].fight->hitbox) && IS_ATTACKING)
                hit_enemy(all, i - 1);
    if (check_collision(NINJA[0].fight->attack_range,
            ENEMY[21].fight->hitbox) && IS_ATTACKING)
                loop_boss(all);
    if (__AGRO_HITBOX && !__ATTACK_HITBOX && !ENEMY[i].state->is_dead) {
        ia_enemy(all, i, i + 1, state);
    } else {
        if (!ENEMY[i].state->is_dead) {
            enemy_random_mov(all, i, state, carte);
        }
    }
    if_attack_player(all, i, state);
}

void first_part_boss_room(general_t *all, map_t *carte, int *a)
{
    for (int i = 12; i != 16; i++) {
        ENEMY[i].move->enemie_pos =
            sfSprite_getPosition(ENEMY[i].sprite->chara);
        ENEMY[i].move->time_enemy =
            sfClock_getElapsedTime(ENEMY[i].move->clock_time);
        ENEMY[i].move->stop_enemy_time =
            sfClock_getElapsedTime(ENEMY[i].move->stop_time);
        set_enemy_hp(all, i, *a);
        check_different_collision(all, i, 1, carte);
        *a++;
        }
}

void collision_handling(general_t *all, map_t *carte)
{
    int a = 0;
    all->item->alo = 0;
    if (all->index_map == 1) {
        first_part_main_room(all, carte, &a);
        second_part_main_room(all, carte, &a);
    }
    if (all->index_map == 4) {
            first_part_boss_room(all, carte, &a);
            fight_part_boss_room(all, carte, &a);
    }
    if (all->index_map == 3)
            first_part_third_room(all, carte, &a);
    if (all->index_map == 2)
            first_part_second_room(all, carte, &a);
    if (all->index_map == 4)
        if (check_collision(ENEMY[21].fight->agro_hitbox, NINJA[0].fight->hitbox)) {
            all->anima->start_fight = true;
            boss_lifebar(all);
        }
}
