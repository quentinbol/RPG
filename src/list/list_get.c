/*
** EPITECH PROJECT, 2022
** list_get.c
** File description:
** list get
*/

#include "rpg.h"

void *list_get_node(list_t *list, unsigned int index)
{

    list_node_t *node = list->head;
    unsigned int current = 0;

    if (node == NULL)
        return NULL;
    while (node != NULL && current < index) {
        current ++;
        node = node->next;
    }
    return node;
}

int list_get(list_t *list, unsigned int index)
{
    list_node_t *node = list_get_node(list, index);

    if (node != NULL)
        return node->index;
    return 0;
}
