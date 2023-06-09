/*
** EPITECH PROJECT, 2023
** aze
** File description:
** true
*/

#include "rpg.h"

void rage_event5(general_t *all)
{
    if (all->objj->anal[14][0] == 1 && all->objj->anal[14][1] == 0) {
        drop_to_inv(all, 1, 5);
        drop_to_inv(all, 2, 1);
        drop_to_inv(all, 4, 1);
        all->objj->anal[14][1]++;
    }
    if (all->objj->anal[11][0] == 1 && all->objj->anal[11][1] == 0) {
        drop_to_inv(all, 1, 4);
        all->objj->anal[11][1]++;
    }
}

void rage_event4(general_t *all)
{
    if (all->objj->anal[12][0] == 1 && all->objj->anal[12][1] == 0) {
        drop_to_inv(all, 1, 1);
        drop_to_inv(all, 9, 3);
        drop_to_inv(all, 8, 2);
        drop_to_inv(all, 2, 1);
        all->objj->anal[12][1]++;
    }
    if (all->objj->anal[13][0] == 1 && all->objj->anal[13][1] == 0) {
        drop_to_inv(all, 4, 2);
        drop_to_inv(all, 5, 1);
        drop_to_inv(all, 7, 1);
        drop_to_inv(all, 8, 1);
        all->objj->anal[13][1]++;
    }
}

void rage_event3(general_t *all)
{
    if (all->objj->anal[8][0] == 1 && all->objj->anal[8][1] == 0) {
        drop_to_inv(all, 1, 2);
        drop_to_inv(all, 8, 4);
        drop_to_inv(all, 5, 1);
        drop_to_inv(all, 7, 2);
        all->objj->anal[8][1]++;
    }
    if (all->objj->anal[9][0] == 1 && all->objj->anal[9][1] == 0) {
        drop_to_inv(all, 10, 1);
        all->objj->anal[9][1]++;
    }
    if (all->objj->anal[10][0] == 1 && all->objj->anal[10][1] == 0) {
        drop_to_inv(all, 3, 1);
        drop_to_inv(all, 1, 1);
        drop_to_inv(all, 6, 1);
        all->objj->anal[10][1]++;
    }
}

void rage_event2(general_t *all)
{
    if (all->objj->anal[4][0] == 1 && all->objj->anal[4][1] == 0) {
        drop_to_inv(all, 4, 1);
        all->objj->anal[4][1]++;
    }
    if (all->objj->anal[5][0] == 1 && all->objj->anal[5][1] == 0) {
        drop_to_inv(all, 1, 3);
        all->objj->anal[5][1]++;
    }
    if (all->objj->anal[6][0] == 1 && all->objj->anal[6][1] == 0) {
        drop_to_inv(all, 6, 1);
        drop_to_inv(all, 9, 2);
        all->objj->anal[6][1]++;
    }
    if (all->objj->anal[7][0] == 1 && all->objj->anal[7][1] == 0) {
        drop_to_inv(all, 2, 1);
        all->objj->anal[7][1]++;
    }
}

void rage_event(general_t *all)
{
    if (all->objj->anal[0][0] == 1 && all->objj->anal[0][1] == 0) {
        drop_to_inv(all, 1, 2);
        all->objj->anal[0][1]++;
    }
    if (all->objj->anal[1][0] == 1 && all->objj->anal[1][1] == 0) {
        drop_to_inv(all, 1, 2);
        all->objj->anal[1][1]++;
    }
    if (all->objj->anal[2][0] == 1 && all->objj->anal[2][1] == 0) {
        drop_to_inv(all, 3, 1);
        all->objj->anal[2][1]++;
    }
    if (all->objj->anal[3][0] == 1 && all->objj->anal[3][1] == 0) {
        drop_to_inv(all, 7, 1);
        all->objj->anal[3][1]++;
    }
    rage_event2(all);
    rage_event3(all);
    rage_event4(all);
    rage_event5(all);
}
