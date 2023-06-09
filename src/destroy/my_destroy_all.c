/*
** EPITECH PROJECT, 2023
** my_destroy_all.c
** File description:
** to destroy everything
*/

#include "rpg.h"

int my_free_all(general_t *all)
{
    my_free_window(all->win);
    my_free_animation(all->anima);
    my_free_item(all->item);
    my_free_satt(all->satt);
    my_free_inv(all->inv);
    my_free_quest(all);
    my_free_name(all->name);
    my_free_animation_effect(all->effect);
    free(all->pause);
    free(all);
    return 0;
}
