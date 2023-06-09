/*
** EPITECH PROJECT, 2023
** add_quest.c
** File description:
** BY - CM
*/

#include "rpg.h"

void delete_quests(list_t *quest, int index)
{
    if (!quest->head)
        return;
    list_remove(quest, index);
    list_refresh(quest);
}

int add_quests(list_t *quest, char **tab, int index)
{
    list_node_t *node = malloc(sizeof(list_node_t));
    UINT i = 0;

    for (; i < 2; i++)
        if (tab[i] == NULL )
            return 1;
    if (tab[i] != NULL )
        return 1;
    if (quest->title == NULL)
        quest->title = get_text_title();
    list_add(quest, index);
    node = list_get_node(quest, quest->size - 1);
    node->name = cm_strdup(tab[0]);
    node->value = cm_strdup(tab[1]);
    node->text = get_text_quest(quest, node);
    return 0;
}

list_node_t *my_quest_node_create(void)
{
    list_node_t *node = malloc(sizeof(list_node_t));

    node->name = NULL;
    node->value = NULL;
    node->next = NULL;
    node->prev = NULL;
    node->text = NULL;
    node->index = 0;
    return node;
}

list_t *my_quest_create(void)
{
    list_t *quest = malloc(sizeof(list_t));

    quest->head = NULL;
    quest->tail = NULL;
    quest->size = 0;
    quest->check = FALSE;
    quest->title = NULL;
    quest->y = 100;
    return quest;
}
