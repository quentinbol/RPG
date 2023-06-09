/*
** EPITECH PROJECT, 2023
** my_free_array.c
** File description:
** to free an array
*/

#include "rpg.h"

int my_free_array(char **str)
{
    if (!str[0])
        return 0;
    for (int i = 0; str[i]; i ++)
        free(str[i]);
    free(str);
    return 0;
}
