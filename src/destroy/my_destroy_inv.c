/*
** EPITECH PROJECT, 2023
** my_destroy_inv.c
** File description:
** to free the struct inv
*/

#include "rpg.h"

int my_free_inv(inv_t *inv)
{
    if (!inv)
        return 0;
    free(inv);
    return 0;
}
