/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "rpg.h"

static general_t *my_struct_create(void)
{
    general_t *all = my_calloc(sizeof(general_t), 1);

    all->win = my_window_create();
    all->item = my_item_create();
    all->objj = my_obj_create();
    all->satt = my_satt_create();
    all->inv = my_inv_create();
    all->quest = my_quest_create();
    all->node = my_quest_node_create();
    all->pause = my_pause_create();
    return all;
}

void init_all(general_t *all)
{
    all->index_map = 1;
    all->index_scenes = 1;
    all->satt->healt_nbr = 0;
    all->satt->damage_nbr = 0;
    all->satt->speed_nbr = 0;
    all->satt->nbr_point = 0;
    all->satt->ath_sat = 0;
    all->satt->levelup = 0;
    all->satt->exp = 0;
    all->inv->boulo = 0;
    all->objj->spid = 2.0;
    all->objj->gluant = 0;
    all->objj->cagelux = 0;
    all->objj->fouette = 0;
    all->objj->trou = 0;
    init_item(all);
}

void destroy(general_t *all)
{
    free(all->quest);
    free(all->node);
    free(all->anima);
    sfMusic_stop(all->win->menu->menu_song);
    sfMusic_destroy(all->win->menu->menu_song);
    sfClock_destroy(all->anima[0].clock_create->clock_item);
    sfRenderWindow_destroy(all->win->win);
    destroy_statistisch(all);
}

static void start_game(general_t *all)
{
    my_start_game(all->win, (sfIntRect){0, 0, 182, 157});
    start_erfunden(all->win, all);
    init_sprite_rect_struct(all, all->win);
    init_five(all);
    init_all(all);
    sfRenderWindow_setFramerateLimit(all->win->win, 60);
}

int main(int argc, char **argv)
{
    general_t *all = my_struct_create();
    map_t carte = my_map_create();

    if (argc != 1 || argv[1])
        return 84;
    start_game(all);
    all->anima->clock_create[1].clock_item = sfClock_create();
    while (sfRenderWindow_isOpen(all->win->win)) {
        if (all->index_scenes == 1)
            my_menu_loop(all);
        if (all->index_scenes == 2)
            my_get_name_loop(all);
        if (all->index_scenes == 3)
            my_game_loop(all->win, all, &carte);
    }
    if (all->index_scenes == -1 || all->index_scenes == 0)
        return my_quit_game(all, &carte);
    my_map_destroy(&carte);
    my_free_all(all);
    return 0;
}
