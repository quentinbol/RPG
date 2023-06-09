/*
** EPITECH PROJECT, 2023
** my_create_all->window.c
** File description:
** to create and return the all->window
*/

#include "rpg.h"

sfRenderWindow *my_create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video = {1920, 1080, 32};

    window = sfRenderWindow_create(video, "RPG", sfResize | sfClose , NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}
