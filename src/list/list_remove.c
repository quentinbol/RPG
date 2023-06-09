/*
** EPITECH PROJECT, 2022
** list_remove.c
** File description:
** g
*/

#include "rpg.h"
static void free_destroy_node(list_node_t *node)
{
    sfText_destroy(node->text[0]);
    sfText_destroy(node->text[1]);
    free(node->name);
    free(node->value);
    free(node);
}

static void list_remove_node(list_t *list, list_node_t *node)
{
    list->size --;
    if (list->size == 0) {
        list->head = NULL;
        return;
    }
    if (node->next == NULL) {
        node->prev->next = NULL;
        list->tail = node->prev;
    } else if (node->prev == NULL) {
        node->next->prev = NULL;
        list->head = node->next;
    } else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    node->next = NULL;
    node->prev = NULL;
    free_destroy_node(node);
}

void list_remove(list_t *list, unsigned int index)
{
    list_node_t *node;
    UINT y = 100;

    if (list == NULL) {
        write(1, "list_remove: list == NULL\n", 27);
        return;
    }
    node = list_get_node(list, index);
    if (node != NULL)
        list_remove_node(list, node);
    list->y -= 90;
    node = list->head;
    for (; node != NULL; node = node->next) {
        sfText_setPosition(node->text[0], (V){1650, y});
        sfText_setPosition(node->text[1], (V){1650, (y + 40)});
        y += 90;
    }
    return;
}
