/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** state enemy animation
*/

#include "rpg.h"

void animation_enemy_not_moving(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 10;
    ENEMY[i].sprite->rect.width = 30;
    if (clock_[id_clock].seconds > 0.35) {
        if (ENEMY[i].sprite->rect.left > 180)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 32;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_enemy_moving(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 40;
    ENEMY[i].sprite->rect.width = 30;
    if (clock_[id_clock].seconds > 0.15) {
        if (ENEMY[i].sprite->rect.left > 150)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 32;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_enemy_attacking(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 105;
    ENEMY[i].sprite->rect.width = 34;
    if (clock_[id_clock].seconds > 0.25) {
        if (ENEMY[i].number_of_frame == 4) {
            ENEMY[i].number_of_frame = 0;
            TAKE_DAMAGE = true;
        }
        if (ENEMY[i].sprite->rect.left > 130) {
            ENEMY[i].sprite->rect.left = 0;
        } else {
            ENEMY[i].sprite->rect.left += 32;
            ENEMY[i].number_of_frame++;
        }
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_enemy_dead(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 168;
    ENEMY[i].sprite->rect.width = 31;
    if (clock_[id_clock].seconds > 0.15) {
        if (ENEMY[i].sprite->rect.left > 220) {
        } else
            ENEMY[i].sprite->rect.left += 32;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}
