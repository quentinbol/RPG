/*
** EPITECH PROJECT, 2023
** animation_bis.c
** File description:
** BY - BQ
*/

#include "rpg.h"

void make_animation_pnj(general_t *all, int i, int id_clock)
{
    sfSprite_setTextureRect(ENEMY[i].sprite->chara, ENEMY[i].sprite->rect);
    clock_[id_clock].time = sfClock_getElapsedTime(clock_[id_clock].clock_item);
    clock_[id_clock].seconds = clock_[id_clock].time.microseconds / 1000000.0;
    set_origin_to_character_enemy(all, i);
    animation_pnj_not_moving(all, i, i + 1);
}

void make_animation_golem(general_t *all, int i, int id_clock)
{
    sfSprite_setTextureRect(ENEMY[i].sprite->chara,
                            ENEMY[i].sprite->rect);
    clock_[id_clock].time = sfClock_getElapsedTime(clock_[id_clock].clock_item);
    clock_[id_clock].seconds = clock_[id_clock].time.microseconds / 1000000.0;
    set_origin_to_character_golem(all, i);
    animation_golem_not_moving(all, i, i + 1);
    get_origin(all, ENEMY[i].ajustement, 2);
}

void make_animation_giant(general_t *all, int i, int id_clock)
{
    sfSprite_setTextureRect(ENEMY[i].sprite->chara,
                            ENEMY[i].sprite->rect);
    clock_[id_clock].time = sfClock_getElapsedTime(clock_[id_clock].clock_item);
    clock_[id_clock].seconds = clock_[id_clock].time.microseconds / 1000000.0;
    set_origin_to_character_giant(all, i);
    animation_giant_not_moving(all, i, id_clock);
}

void make_animation_enemy(general_t *all, int i, int id_clock)
{
    sfSprite_setTextureRect(ENEMY[i].sprite->chara,
                            ENEMY[i].sprite->rect);
    clock_[id_clock].time = sfClock_getElapsedTime(clock_[id_clock].clock_item);
    clock_[id_clock].seconds = clock_[id_clock].time.microseconds / 1000000.0;
    set_origin_to_character_enemy(all, i);
    animation_enemy_not_moving(all, i, i + 1);
}

void make_animation_ninja(general_t *all)
{
    sfSprite_setTextureRect(NINJA[0].sprite->chara, NINJA[0].sprite->rect);
    set_origin_to_character_ninja(all);
    player_border(all);
    clock_[0].time = sfClock_getElapsedTime(clock_[0].clock_item);
    clock_[0].seconds = clock_[0].time.microseconds / 1000000.0;
    if (!IS_RUNNING && !IS_ATTACKING)
        animation_ninja_not_moving(all);
    if (IS_ATTACKING && !IS_CURRENT_ATTACKING)
        animation_ninja_attacking(all);
    if (IS_CURRENT_ATTACKING)
        ninja_currently_attacking(all);
    if (IS_RUNNING)
        animation_ninja_running(all);
    if (IS_DEAD)
        animation_ninja_dead(all);
}
