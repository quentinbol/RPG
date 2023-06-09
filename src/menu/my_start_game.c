/*
** EPITECH PROJECT, 2023
** my_start_game.c
** File description:
** animation before the start of the game
*/

#include "rpg.h"

sfSprite *my_sprite_get(void)
{
    sfSprite *book = sfSprite_create();
    sfTexture *textu = sfTexture_createFromFile("assets/Menu/book.png", NULL);

    sfSprite_setTexture(book, textu, sfTrue);
    sfSprite_setTextureRect(book, (sfIntRect){0, 0, 182, 157});
    sfSprite_setScale(book, (sfVector2f){6, 6});
    sfSprite_setPosition(book, (sfVector2f){414, 69});
    return book;
}

int my_start_game(window_t *win, sfIntRect rect)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    sfSprite *book = my_sprite_get();
    sfMusic_play(win->menu->menu_song);
    while (sfTime_asSeconds(time) < 0.25) {
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) >= 0.2 && rect.left < 1080) {
            rect.left += 190;
            sfClock_restart(clock);
        }
        sfRenderWindow_clear(win->win, sfBlack);
        sfSprite_setTextureRect(book, rect);
        sfRenderWindow_drawSprite(win->win, win->menu->background, NULL);
        sfRenderWindow_drawSprite(win->win, book, NULL);
        sfRenderWindow_display(win->win);
    }
    rect.left = 570;
    sfSprite_setTextureRect(book, rect);
    win->menu->back = book;
    return 0;
}
