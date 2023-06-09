/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** event_mouvement
*/

#include "rpg.h"

void event_player_stop_moving(general_t *all)
{
    RUN = false;
    all->anima[0].move->dx = 0;
    all->anima[0].move->dy = 0;
}

void event_player_mouvement(general_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) && !IS_DEAD) {
        RUN = true;
        RUN_REVERSE = false;
        all->anima[0].move->dx = all->item->speeed;
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && !IS_DEAD) {
        RUN = true;
        RUN_REVERSE = true;
        all->anima[0].move->dx = -all->item->speeed;
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ) && !IS_DEAD) {
        RUN = true;
        all->anima[0].move->dy = -all->item->speeed;
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && !IS_DEAD) {
        RUN = true;
        all->anima[0].move->dy = all->item->speeed;
    }
}
