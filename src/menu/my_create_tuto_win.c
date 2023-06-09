/*
** EPITECH PROJECT, 2023
** my_create_tuto_win.c
** File description:
** to create the window how to play
*/

#include "rpg.h"

static sfRenderWindow *my_get_small_win(void)
{
    sfVideoMode video = {580, 480, 32};
    char *name = "How to play";
    sfRenderWindow *window = sfRenderWindow_create(video, name, sfClose, NULL);

    return window;
}

info_t *my_create_tuto_win(void)
{
    info_t *tuto = my_calloc(sizeof(info_t), 1);
    sfVector2f p = {0, 0};
    sfVector2f p2 = {1, 1};
    sfVector2f s = {1.1, 1.6};
    char *text = "HOW  TO  PLAY\n\n\tCONTROLS:\n\tYou can use the letters z,q,\
s,d to move\n\t in the four directions respectively forward,\n\t left,\
backward and right.\n\n\tYou can also use the left click to attack.\n\tYou can\
also press e to open your inventory.\n\tPress A to pick up an object once a \
blue \nquestion mark appear near the player\n\tPress tab to open the stats \
window\n\tPress 1 or 2 to use the obbject 1 and 2\n";

    tuto->win = my_get_small_win();
    tuto->background = my_get_sprite("assets/Menu/tuto_background.jpg", p, s);
    tuto->script = my_get_text(text, p2, (V){1, 1});
    return tuto;
}
