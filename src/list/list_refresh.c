/*
** EPITECH PROJECT, 2023
** list_refresh.c
** File description:
** list_refresh to actualize the node's index
*/

#include "rpg.h"

void list_refresh(list_t *list)
{
    int i = 0;

    for (list_node_t *node = list->head; node != NULL; node = node->next) {
        node->index = i;
        i ++;
    }
    return;
}
