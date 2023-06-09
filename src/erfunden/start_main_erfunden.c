/*
** EPITECH PROJECT, 2023
** start inv
** File description:
** true
*/

#include "rpg.h"

inv_t *my_inv_create(void)
{
    inv_t *inv = my_calloc(sizeof(inv_t), 1);
}

void start_erfunden(window_t *win, general_t *all)
{
    init_inv_a(all);
}

void loop_erfunden(window_t *win, general_t *all)
{
    loopy_erf_one(all);
    display_inv_a(win, all);
}
