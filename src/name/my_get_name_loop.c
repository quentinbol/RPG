/*
** EPITECH PROJECT, 2023
** my_get_name_loop.c
** File description:
** input for player name loop
*/

#include "rpg.h"

static void my_init_name_struct(general_t *all)
{
    char *str = "Enter  name \nbetween:\n 1 and 9\n characters";
    char *file = "assets/name/button.png";
    sfIntRect rect = {20, 225, 160, 50};

    all->name = my_calloc(sizeof(name_t), 1);
    all->name->name = my_calloc(1, 10);
    all->name->len = 0;
    all->name->enter_name = my_get_text("Enter name", (V){580, 300}, (V){2, 2});
    all->name->limit_char = my_get_text(str, (V){1050, 300}, (V){2, 2});
    all->name->button = my_get_sprite(file, (V){580, 500}, (V){2, 2});
    all->name->username = my_get_text("", (V){635, 510}, (V){2, 2});
    sfText_setColor(all->name->limit_char, sfBlack);
    sfText_setColor(all->name->enter_name, sfBlack);
    sfText_setOrigin(all->name->username, (V){1, 1});
    sfSprite_setTextureRect(all->name->button, rect);
    return;
}

int my_get_name_loop(general_t *all)
{
    for (int i = 0; i < 3; i ++)
        my_turn_page_right(all->win);
    my_init_name_struct(all);
    while (all->index_scenes == 2) {
        my_event_name(all);
        my_disp_name(all);
    }
    sfText_setOutlineThickness(all->name->username, 1);
    sfText_setOutlineColor(all->name->username, sfWhite);
    sfText_setFillColor(all->name->username, sfRed);
    sfText_setPosition(all->name->username, (V){20, 80});
    return 0;
}
