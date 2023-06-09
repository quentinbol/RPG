/*
** EPITECH PROJECT, 2023
** satt
** File description:
** true
*/

#include "rpg.h"

void exp_gest(general_t *all, float aie)
{
    if (all->satt->levelup < 9) {
        all->satt->exp = all->satt->exp + aie;
        if (all->satt->exp >= 400) {
            all->satt->exp = 0;
            (all->satt->levelup)++;
            (all->satt->nbr_point)++;
        }
    }
}

void sat(general_t *all)
{
    if (all->satt->ath_sat == 0)
        all->satt->ath_sat = 84;
        else
            all->satt->ath_sat = 0;
}

void event_sat(general_t *all, window_t *win, int x, int y)
{
    if (x > 1627 && x < 1670 && y > 121 && y < 156) {
        if (all->satt->healt_nbr != 9 && all->satt->nbr_point > 0) {
            all->satt->healt_nbr++;
            all->item->hp_ninja += 50;
            all->item->hp_max_ninja += 50;
            all->satt->nbr_point--;
        }
    }
    if (x > 1621 && x < 1674 && y > 210 && y < 248) {
        if (all->satt->damage_nbr != 9 && all->satt->nbr_point > 0) {
            all->item->damaje += 0.03;
            all->satt->damage_nbr++; all->satt->nbr_point--;
        }
    }
    if (x > 1612 && x < 1668 && y > 307 && y < 360) {
        if (all->satt->speed_nbr != 9 && all->satt->nbr_point > 0) {
            all->item->speeed += 30;
            all->satt->speed_nbr++; all->satt->nbr_point--;
        }
    }
}

void loopy_sat(general_t *all)
{
    all->satt->str[0][0] = all->satt->healt_nbr + 48;
    all->satt->str[1][0] = all->satt->damage_nbr + 48;
    all->satt->str[2][0] = all->satt->speed_nbr + 48;
    all->satt->str[3][0] = all->satt->levelup + 48;
    all->satt->str[4][0] = all->satt->nbr_point + 48;
    sfText_setString(all->satt->healt, all->satt->str[0]);
    sfText_setString(all->satt->damage, all->satt->str[1]);
    sfText_setString(all->satt->speed, all->satt->str[2]);
    sfText_setString(all->satt->level, all->satt->str[3]);
    sfText_setString(all->satt->level3, all->satt->str[3]);
    sfText_setString(all->satt->nbr_point_text, all->satt->str[4]);
}

void loop_sat(general_t *all)
{
    if (all->satt->ath_sat == 0) {
        sfSprite_setPosition(all->satt->plac, (V) {3000, 3000});
        sfSprite_setPosition(all->satt->heart, (V) {3000, 3000});
        sfSprite_setPosition(all->satt->sword, (V) {3000, 3000});
        sfSprite_setPosition(all->satt->booth, (V) {3000, 3000});
        sfText_setPosition(all->satt->healt, (V) {3000, 3000});
        sfText_setPosition(all->satt->damage, (V) {3000, 3000});
        sfText_setPosition(all->satt->speed, (V) {3000, 3000});
        sfText_setPosition(all->satt->level, (V) {3000, 3000});
        sfText_setPosition(all->satt->nbr_point_text, (V) {3000, 3000});
    }
    bourage_1(all);
    loopy_sat(all);
}
