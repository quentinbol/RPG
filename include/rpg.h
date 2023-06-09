/*
** EPITECH PROJECT, 2023
** rpg.h
** File description:
** rpg'header
*/

#ifndef RPG_H
    #define RPG_H

/*-------------INCLUDE-------------*/
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <math.h>

    #include "animation/animation.h"
    #include "erfunden/erfunden.h"
    #include "event/event.h"
    #include "hitbox/hitbox.h"
    #include "map/map.h"
    #include "menu/menu.h"
    #include "menu_pause/pause.h"
    #include "mouvement/mouvement.h"
    #include "name/name.h"
    #include "quest/list.h"
    #include "quest/quests.h"
    #include "statistisch/statistisch.h"
    #include "obj/obj.h"
    #include "utils/utils.h"
    #include "dead/dead.h"
/*-------------INCLUDE-------------*/

/*-------------STRUCTURE-------------*/
    typedef struct map_s map_t;

    typedef struct general_s {

        window_t *win;
        animation_t *anima;
        item_t *item;
        obj_t *objj;
        satt_t *satt;
        inv_t *inv;
        list_t *quest;
        list_node_t *node;
        pause_t *pause;
        int index_scenes;
        name_t *name;
        animation_effect_t *effect;
        int index_map;
        float seconds;
        death_t *dead;

    } general_t;
/*-------------STRUCTURE-------------*/

/*------------------DEFINE---------------*/
    #define KEY_PRESSED win->evt.type == sfEvtKeyPressed
    #define MOUSE_PRESSED win->evt.type == sfEvtMouseButtonPressed
    #define KEY_RELEASED win->evt.type == sfEvtKeyReleased
/*------------------DEFINE---------------*/

//main.c
    void init_all(general_t *all);
    void destroy(general_t *all);

//my_game_loop.c
    void display_all(window_t *win, general_t *all, map_t *carte);
    void reduce_hp(general_t *all);
    void state_hp_ninja(general_t *all);
    int my_game_loop(window_t *win, general_t *all, map_t *carte);

/*------------------EVENT_H_---------------*/
//event_check.c
    int my_event_check(window_t *win, general_t *all);

//event_item.c
    void event_sat_2(general_t *all, window_t *win, int x, int y);
    void item_event(window_t *win, general_t *all);
/*------------------EVENT_H_---------------*/

/*------------------ANIMATION_H_---------------*/
//animation.c
    void display_animation(window_t *win, general_t *all);
//init_set_sprite_anim.c
    void init_sprite_rect_struct(general_t *all, window_t *win);
//init_set_sprite_anim.c
    void set_sprite(general_t *all, window_t *win);
    void third_display(general_t *all, window_t *win);
    void second_display(general_t *all, window_t *win);
    void set_sprite(general_t *all, window_t *win);
/*------------------ANIMATION_H_---------------*/

/*------------------ERFUDEN_H_---------------*/
//display_erfunden.c
    void display_inv_a(window_t *win, general_t *all);
//event_erfuden.c
    void event_inv(window_t *win, general_t *all, int x, int y);
//start_main_erfunden.c
    void start_erfunden(window_t *win, general_t *all);
    void loop_erfunden(window_t *win, general_t *all);
/*------------------ERFUDEN_H_---------------*/

/*------------------HITBOX_H_---------------*/
//hitbox.c
    void display_hitbox(window_t *win, general_t *all, map_t *carte);
/*------------------HITBOX_H_---------------*/

/*------------------DESTROY-----------------*/
    int my_free_all(general_t *all);
    int my_free_animation(animation_t *anima);
    int my_free_animation_effect(animation_effect_t *effect);
    int my_free_inv(inv_t *inv);
    int my_free_item(item_t *item);
    int my_free_satt(satt_t *satt);
    int my_free_quest(general_t *all);
    int my_free_window(window_t *win);
    int my_free_name(name_t *name);
    int my_free_array(char **str);
    int my_quit_game(general_t *all, map_t *carte);
/*----------------DESTROY------------------*/

void bourage_1(general_t *all);
void voidyy(window_t *win, general_t *all);
void szde(window_t *win, general_t *all);
void cheat_code(general_t *all);

#endif /* RPG_H */
