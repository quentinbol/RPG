/*
** EPITECH PROJECT, 2023
** get_param_pause.c
** File description:
** BY - CM
*/

#include "rpg.h"

void get_text_menu(pause_t *pause)
{
    sfVector2f scale = {2, 2};

    pause->title = my_get_text("PAUSE", (V){850, 50}, scale);
    pause->resume = my_get_text("RESUME", (V){650, 400}, scale);
    pause->save = my_get_text("SAVE", (V){650, 600}, scale);
    pause->settings = my_get_text("SETTINGS", (V){1020, 400}, scale);
    pause->quit = my_get_text("QUIT GAME", (V){1020, 600}, scale);
    pause->ret = my_get_text("RETURN", (V){650, 750}, scale);
    sfText_setColor(pause->title, sfRed);
    sfText_setColor(pause->resume, sfBlack);
    sfText_setColor(pause->save, sfBlack);
    sfText_setColor(pause->settings, sfBlack);
    sfText_setColor(pause->quit, sfBlack);
    sfText_setColor(pause->ret, sfBlack);
}

void destroy_menu(pause_t *pause)
{
    sfSprite_destroy(pause->background);
    sfSprite_destroy(pause->font);
    sfText_destroy(pause->title);
    sfText_destroy(pause->resume);
    sfText_destroy(pause->save);
    sfText_destroy(pause->settings);
    sfText_destroy(pause->quit);
    sfText_destroy(pause->ret);
}
