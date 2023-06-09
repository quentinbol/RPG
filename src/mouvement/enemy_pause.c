/*
** EPITECH PROJECT, 2023
** enemy_pause.c
** File description:
** BY - BQ
*/

#include"rpg.h"

void enemy_pause(general_t *all, int i)
{
    ENEMY[i].fight->stop_time +=
        sfTime_asSeconds(ENEMY[i].move->stop_enemy_time);
        if (ENEMY[i].fight->stop_time > 1000) {
            ENEMY[i].fight->i = 0;
            ENEMY[i].fight->stop_time = 0;
            sfClock_restart(ENEMY[i].move->stop_time);
        }
}
