/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** check wich map
*/

#include "rpg.h"

void check_which_map(general_t *all, int i)
{
    if (i == 0)
        all->index_map = 4;
    if (i == 1)
        all->index_map = 2;
    if (i == 2)
        all->index_map = 3;
    if (i == 3)
        all->index_map = 1;
}
