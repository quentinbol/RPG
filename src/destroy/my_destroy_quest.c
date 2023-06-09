/*
** EPITECH PROJECT, 2023
** my_destro_quest.c
** File description:
** to free the list of quest
*/

#include "rpg.h"

int my_free_quest(general_t *all)
{
    if (!all->quest)
        return 0;
    for (list_node_t *node = all->quest->head; node; node = node->next) {
        list_remove(all->quest, 1);
        list_refresh(all->quest);
    }
    sfText_destroy(all->quest->title);
    free(all->quest);
    free(all->node);
    return 0;
}
