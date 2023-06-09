/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** counts and returns the number of characters found
*/

#include "rpg.h"

unsigned int cm_strlen(char const *str)
{
    UINT i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
