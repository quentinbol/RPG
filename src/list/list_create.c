/*
** EPITECH PROJECT, 2022
** list_create.c
** File description:
** create list
*/

#include "rpg.h"

list_t *list_create(void)
{
    list_t *list = my_calloc(sizeof(list_t), 1);

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}
