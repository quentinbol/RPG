/*
** EPITECH PROJECT, 2023
** my_ded_screen_loop.c
** File description:
** the dead_screen loop
*/

#include "rpg.h"

static death_t *my_create_dead_screen(void)
{
    sfVector2f scal = {1, 1};
    sfVector2f scale = {3, 3};
    death_t *dead = my_calloc(sizeof(death_t), 1);

    dead->background = my_get_sprite("assets/dead/dead_2.jpg", (V){0, 0}, scal);
    dead->quit = my_get_text("QUIT GAME", (V){1920 / 2 - 200, 200}, scale);
    dead->menu = my_get_text("Menu", (V){1920 / 2 - 180, 850}, scale);
    sfText_setOrigin(dead->quit, (V){10, 10});
    sfText_setOrigin(dead->menu, (V){10, 10});
    return dead;
}

int my_dead_screen_loop(general_t *all)
{
    bool is_dead = true;

    all->dead = my_create_dead_screen();
    while (is_dead) {
        my_death_disp(all);
        my_death_event(all, &is_dead);
    }
    return 0;
}
