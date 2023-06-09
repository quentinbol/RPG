/*
** EPITECH PROJECT, 2023
** display_quest.c
** File description:
** BY - CM
*/

#include "rpg.h"

sfText *get_text_title(void)
{
    sfText *title = my_get_text("Main Quest !", (V){1700, 50}, (V){1, 1});

    sfText_setColor(title, sfYellow);
    return title;
}

sfText **get_text_quest(list_t *quest, list_node_t *node)
{
    sfText **text = malloc(sizeof(sfText *) * 3);

    text[0] = my_get_text(node->name, (V){1650, quest->y}, (V){1, 1});
    text[1] = my_get_text(node->value, (V){1650, (quest->y + 40)}, (V){1, 1});
    text[2] = NULL;
    quest->y += 90;
    return text;
}

void display_quest(window_t *win, list_t *quest, list_node_t *node)
{
    node = quest->head;
    if (node == NULL)
        return;
    sfRenderWindow_drawText(win->win, quest->title, NULL);
    for (; node != NULL; node = node->next) {
        sfRenderWindow_drawText(win->win, node->text[0], NULL);
        sfRenderWindow_drawText(win->win, node->text[1], NULL);
    }
}
