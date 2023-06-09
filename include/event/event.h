/*
** EPITECH PROJECT, 2023
** event.h
** File description:
** BY - CM
*/

#ifndef EVENT_H_
    #define EVENT_H_

    #include "rpg.h"
    typedef struct general_s general_t;

//event_mouvement.c
    void event_player_stop_moving(general_t *all);
    void event_player_mouvement(general_t *all);

//event_player.c
    void event_player_dead(general_t *all);
    void event_player_attack(general_t *all);

#endif /* !EVENT_H_ */
