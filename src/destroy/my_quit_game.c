/*
** EPITECH PROJECT, 2023
** my_quit_game.c
** File description:
** to free if you quit from the menu
*/

#include "rpg.h"

int my_quit_game(general_t *all, map_t *carte)
{
    if (all->index_scenes == -1)
        my_map_destroy(carte);
    my_free_window(all->win);
    free(all);
    return 0;
}
