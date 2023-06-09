/*
** EPITECH PROJECT, 2023
** my_game_loop.c
** File description:
** the loop of the game
*/

#include "rpg.h"

void display_all(window_t *win, general_t *all, map_t *carte)
{
    sfRenderWindow_drawSprite(all->win->win, carte->sprite_map, NULL);
    display_animation(win, all);
    mouvement_character(all, carte);
    display_hitbox(win, all, carte);
    display_quest(win, all->quest, all->node);
    display_hut(win, all);
}

void reduce_hp(general_t *all)
{
    if (all->item->hp_ninja - 5 >= 0)
        all->item->hp_ninja = all->item->hp_ninja - 5;
}

static void state_hp_ninja_bis(general_t *all)
{
    for (int i = 0; i != 5; i++) {
        if (FIRE[i].inflict_damage) {
            reduce_hp(all);
        }
    }
    if (all->item->hp_ninja == 0) {
        event_player_dead(all);
        my_dead_screen_loop(all);
    }
}

void state_hp_ninja(general_t *all)
{
    if (TAKE_DAMAGE) {
        all->item->hp_ninja = all->item->hp_ninja - 50;
        TAKE_DAMAGE = false;
        if (all->item->hp_ninja <= 0)
            all->item->hp_ninja = 0;
    }
    if (TAKE_DAMAGE_BIG) {
        all->item->hp_ninja = all->item->hp_ninja - 100;
        TAKE_DAMAGE_BIG = false;
        if (all->item->hp_ninja <= 0)
            all->item->hp_ninja = 0;
    }
    if (TAKE_DAMAGE_SPIKE) {
        all->item->hp_ninja = all->item->hp_ninja - 50;
        TAKE_DAMAGE_SPIKE = false;
        if (all->item->hp_ninja <= 0)
            all->item->hp_ninja = 0;
    }
    state_hp_ninja_bis(all);
}

int my_game_loop(window_t *win, general_t *all, map_t *carte)
{
    all->item->x++;
    char *tab[] = {"GroCaillou", "Find key and kill boss", NULL};

    while (sfRenderWindow_pollEvent(win->win, &win->evt)) {
        my_event_check(win, all);
    }
    if (all->quest->check != TRUE) {
        add_quests(all->quest, tab, (all->quest->size + 1));
        all->quest->check = TRUE;
    }
    loop_lifebar(all);
    loop_item(all);
    sfRenderWindow_clear(win->win, sfBlack);
    display_all(win, all, carte);
    loop_erfunden(win, all);
    display_obj(win, all);
    state_hp_ninja(all);
    sfRenderWindow_display(win->win);
    return 0;
}
