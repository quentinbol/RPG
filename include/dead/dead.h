/*
** EPITECH PROJECT, 2023
** dead.h
** File description:
** deadscreen's header
*/

#ifndef DEATH_H
    #define DEATH_H

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;
    typedef struct death_s {

        sfSprite *background;
        sfText *quit;
        sfText *menu;

    } death_t;
/*-------------STRUCTURE-------------*/

//my_deatd_screen_loop.c
    int my_dead_screen_loop(general_t *all);

//my_death_loop.c
    int my_death_event(general_t *all, bool *is_dead);
    int my_death_disp(general_t *all);

#endif
