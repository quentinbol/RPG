/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** animation for giant
*/

#include "rpg.h"

void animation_giant_not_moving(general_t *all, int i, int id_clock)
{
    if (clock_[id_clock].seconds > 0.3) {
        if (ENEMY[i].sprite->rect.left > 380)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 56;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_giant_attacking(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 350;
    ENEMY[i].sprite->rect.width = 70;
    if (clock_[id_clock].seconds > 0.2) {
        ENEMY[i].sprite->rect.left;
        if (ENEMY[i].number_of_frame == 7) {
            ENEMY[i].number_of_frame = 0;
            TAKE_DAMAGE = true;
        }
        if (ENEMY[i].sprite->rect.left > 380)
            ENEMY[i].sprite->rect.left = 0;
        else {
            ENEMY[i].sprite->rect.left += 56;
            ENEMY[i].number_of_frame++;
        }
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_giant_moving(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 125;
    if (clock_[id_clock].seconds > 0.3) {
        if (ENEMY[i].sprite->rect.left > 380)
            ENEMY[i].sprite->rect.left = 0;
        else
            ENEMY[i].sprite->rect.left += 56;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}

void animation_giant_death(general_t *all, int i, int id_clock)
{
    ENEMY[i].sprite->rect.top = 462;
    if (clock_[id_clock].seconds > 0.3) {
        if (ENEMY[i].sprite->rect.left > 380) {
        } else
            ENEMY[i].sprite->rect.left += 56;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}
