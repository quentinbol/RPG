/*
** EPITECH PROJECT, 2023
** pause.h
** File description:
** BY - CM
*/

#ifndef PAUSE_H_
    #define PAUSE_H_

    #define FALSE (0)
    #define TRUE (1)

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;
    typedef struct pause_s {

        sfSprite *background;
        sfSprite *font;
        sfText *title;
        sfText *resume;
        sfText *save;
        sfText *settings;
        sfText *quit;
        sfText *ret;
        sfBool is_pause;
        int index;

    } pause_t;
/*-------------STRUCTURE-------------*/

/*--------------------------display_menu_pause.c-----------------------*/
    void display_settings_pause(window_t *win, pause_t *pause);
    void display_menu_pause(window_t *win, pause_t *pause);
    void display_menu(window_t *win, pause_t *pause);
/*--------------------------display_menu_pause.c-----------------------*/

/*--------------------------event_mouse_pause.c------------------------*/
    void over_button_pause(pause_t *pause, window_t *win);
    void check_button_pause(pause_t *pause, window_t *win);
/*--------------------------event_mouse_pause.c------------------------*/

/*---------------------------get_param_pause.c-------------------------*/
    void get_text_menu(pause_t *pause);
    void destroy_menu(pause_t *pause);
/*---------------------------get_param_pause.c-------------------------*/

/*-------------------------------pause.c-------------------------------*/
    sfSprite *get_sprite_pause(void);
    int event_pause(general_t *all, window_t *win, pause_t *pause);
    int process_pause(general_t *all, window_t *win);
    pause_t *my_pause_create(void);
/*-------------------------------pause.c-------------------------------*/

#endif /* !PAUSE_H_ */
