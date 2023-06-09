/*
** EPITECH PROJECT, 2023
** my_disp_name.c
** File description:
** to disp everything we need there
*/

#include "rpg.h"

void my_disp_name(general_t *all)
{
    sfRenderWindow_clear(all->win->win, sfBlack);
    sfRenderWindow_drawSprite(all->win->win, all->win->menu->background, NULL);
    sfRenderWindow_drawSprite(all->win->win, all->win->menu->back, NULL);
    sfRenderWindow_drawSprite(all->win->win, all->name->button, NULL);
    sfRenderWindow_drawText(all->win->win, all->name->limit_char, NULL);
    sfRenderWindow_drawText(all->win->win, all->name->enter_name, NULL);
    sfRenderWindow_drawText(all->win->win, all->name->username, NULL);
    sfRenderWindow_display(all->win->win);
    return;
}
