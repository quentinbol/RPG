/*
** EPITECH PROJECT, 2023
** menu.h
** File description:
** menu's header
*/

#ifndef MENU_H
    #define MENU_H
    #define bool _Bool
    #define true 1
    #define false 0

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;

    typedef struct menu_s {

        sfSprite *back;
        sfSprite *background;
        sfSprite *how_to_play;
        sfText *button_text;
        sfText *settings;
        sfText *start_the_game;
        sfText *resume_game;
        sfText *quit;
        sfSprite *volume_up;
        sfSprite *volume_down;
        sfSprite *volume;
        sfText *volume_text;
        bool music_playing;
        float loud;
        sfText *reso1;
        sfText *reso2;
        sfText *fullscreen;
        sfSprite *case_yes;
        sfSprite *case_no;
        bool full_screen;
        bool sfx;
        sfText *sfx_name;
        sfSprite *sfxon;
        sfSprite *sfxoff;
        sfText *title;
        sfMusic *menu_song;
        bool is_quit;

    } menu_t;

    typedef struct info_s {

        sfRenderWindow *win;
        sfEvent event;
        sfText *script;
        sfSprite *background;

    } info_t;

    typedef struct window_s {

        sfRenderWindow *win;
        sfEvent evt;
        menu_t *menu;
        sfClock *clock;
        sfTime time;
        int index;
        info_t *tuto;

    } window_t;
/*-------------STRUCTURE-------------*/

//is_hooving_button.c
    int is_hooving_button(window_t *win);

//my_check_button.c
    int my_check_info(int x, int y, window_t *win);
    int my_check_button(window_t *win);

//my_create_tuto_win.c
    info_t *my_create_tuto_win(void);

//my_create_window.c
    sfRenderWindow *my_create_window(void);

//my_menu_disp.c
    void my_menu_disp(window_t *win);

//my_menu_loop.c
    void my_menu_loop(general_t *all);

//my_start_game.c
    sfSprite *my_sprite_get(void);
    int my_start_game(window_t *win, sfIntRect rect);

//my_switch_window.c
    int my_switch_window(window_t *win);

//my_turn_page.c
    int my_turn_page_left(window_t *win);
    int my_turn_page_right(window_t *win);

//my_tuto_loop.c
    int my_tuto_loop(window_t *win);

//my_window_create.c
    window_t *my_window_create(void);

#endif /* MENU_H */
