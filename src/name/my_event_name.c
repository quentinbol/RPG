/*
** EPITECH PROJECT, 2023
** my_event_name.c
** File description:
** my_event_name
*/

#include "rpg.h"

static int is_enter(general_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && all->name->len > 0)
        all->index_scenes = 3;
    return 0;
}

static void my_get_input(general_t *all)
{
    if (all->win->evt.text.unicode >= 48 && all->win->evt.text.unicode <= 122 &&
        all->name->len < 9)
        all->name->name[all->name->len ++] = (char)all->win->evt.text.unicode;
    if (all->win->evt.text.unicode == 8 && all->name->len > 0)
        all->name->name[-- all->name->len] = '\0';
    return;
}

void my_event_name(general_t *all)
{
    while (sfRenderWindow_pollEvent(all->win->win, &all->win->evt)) {
        if (all->win->evt.type == sfEvtTextEntered)
            my_get_input(all);
        if (sfKeyboard_isKeyPressed)
            is_enter(all);
        if (all->win->evt.text.unicode == 27) {
            all->index_scenes = 0;
            sfRenderWindow_close(all->win->win);
        }
    }
    sfText_setString(all->name->username, all->name->name);
    return;
}
