/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** golem animation
*/

#include "rpg.h"

void animation_golem_not_moving(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 9;
    ENEMY[i].sprite->rect.width = 65;
    if (clock_[id_clock].seconds > 0.25) {
        if (ENEMY[i].sprite->rect.left > 400)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 59;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_golem_moving(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 68;
    ENEMY[i].sprite->rect.width = 59;
    if (clock_[id_clock].seconds > 0.25) {
        if (ENEMY[i].sprite->rect.left > 400)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 59;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_golem_attacking(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 188;
    ENEMY[i].sprite->rect.width = 59;
    if (clock_[id_clock].seconds > 0.15) {
        if (ENEMY[i].number_of_frame == 5) {
            TAKE_DAMAGE_BIG = true;
        }
        if (ENEMY[i].number_of_frame == 8)
            ENEMY[i].number_of_frame = 0;
        if (ENEMY[i].sprite->rect.left > 400) {
            ENEMY[i].number_of_frame++;
            ENEMY[i].sprite->rect.left = 0;
        } else {
            ENEMY[i].sprite->rect.left += 59;
            ENEMY[i].number_of_frame++;
        }
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_golem_dead(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 168;
    ENEMY[i].sprite->rect.width = 31;
    if (clock_[id_clock].seconds > 0.15) {
        if (ENEMY[i].sprite->rect.left > 220)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 32;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}
