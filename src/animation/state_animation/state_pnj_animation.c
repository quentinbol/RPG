/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** pnj animation
*/

#include "rpg.h"

void animation_pnj_not_moving(general_t *all, int i, int id_clock)
{
    if (clock_[id_clock].seconds > 0.25) {
        if (ENEMY[i].sprite->rect.left > 400)
            ENEMY[i].sprite->rect.left = 10;
        else
            ENEMY[i].sprite->rect.left += 56;
        sfClock_restart(clock_[id_clock].clock_item);
    }
}
