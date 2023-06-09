/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** Write a function that allocates memory
*/

#include "rpg.h"

char *cm_strdup(char const *src)
{
    UINT i = 0;
    char *dest;

    dest = malloc(sizeof(char) * (cm_strlen(src) + 1));
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
