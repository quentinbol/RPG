/*
** EPITECH PROJECT, 2023
** name.h
** File description:
** name's header
*/

#ifndef NAME_H
    #define NAME_H

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;
    typedef struct name_s {

        int len;
        sfSprite *button;
        sfText *enter_name;
        sfText *limit_char;
        sfText *username;
        char *name;

    } name_t;
/*-------------STRUCTURE-------------*/

//my_disp_name.c
    void my_disp_name(general_t *all);

//my_event_name.c
    void my_event_name(general_t *all);

//my_get_name_loop.C
    int my_get_name_loop(general_t *all);

#endif
