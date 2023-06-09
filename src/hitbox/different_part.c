/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** diff part
*/

#include "rpg.h"

void second_part_main_room(general_t *all, map_t *carte, int *a)
{
    for (int i = 22; i != 23; i++) {
            ENEMY[i].move->enemie_pos =
                sfSprite_getPosition(ENEMY[i].sprite->chara);
            ENEMY[i].move->time_enemy =
                sfClock_getElapsedTime(ENEMY[i].move->clock_time);
            ENEMY[i].move->stop_enemy_time =
            sfClock_getElapsedTime(ENEMY[i].move->stop_time);
            set_enemy_hp(all, i, *a);
            check_different_collision(all, i, 3, carte);
            *a++;
        }
}

void first_part_main_room(general_t *all, map_t *carte, int *a)
{
    for (int i = 1; i != 5; i++) {
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

void fight_part_boss_room(general_t *all, map_t *carte, int *a)
{
    if (all->anima->start_fight) {
        ENEMY[21].fight->agro_hitbox = create_agro_hitbox(all,
            ENEMY[21].fight->agro_hitbox,
            (V) {ENEMY[21].ajustement.x + 140,
            ENEMY[21].ajustement.y + 160}, 10000);
        for (int i = 16; i != 22; i++) {
            ENEMY[i].move->enemie_pos =
                sfSprite_getPosition(ENEMY[i].sprite->chara);
            ENEMY[i].move->time_enemy =
                sfClock_getElapsedTime(ENEMY[i].move->clock_time);
            ENEMY[i].move->stop_enemy_time =
                sfClock_getElapsedTime(ENEMY[i].move->stop_time);
            set_enemy_hp(all, i, *a);
            check_different_collision(all, i, 2, carte);
            sfCircleShape_setRadius(ENEMY[i].fight->agro_hitbox, 1000);
            *a++;
            }
        }
}

void first_part_third_room(general_t *all, map_t *carte, int *a)
{
        for (int i = 5; i != 12; i++) {
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

void first_part_second_room(general_t *all, map_t *carte, int *a)
{
    ENEMY[23].move->enemie_pos =
        sfSprite_getPosition(ENEMY[23].sprite->chara);
    ENEMY[23].move->time_enemy =
            sfClock_getElapsedTime(ENEMY[23].move->clock_time);
    ENEMY[23].move->stop_enemy_time =
            sfClock_getElapsedTime(ENEMY[23].move->stop_time);
    set_enemy_hp(all, 23, *a);
    check_different_collision(all, 23, 3, carte);
    *a++;
}
