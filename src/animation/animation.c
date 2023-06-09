/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** animaton of diffentes items
*/

#include "rpg.h"

void first_make(general_t *all)
{
    make_animation_enemy(all, 1, 2);
    make_animation_enemy(all, 2, 3);
    make_animation_enemy(all, 3, 4);
    make_animation_enemy(all, 4, 5);
    make_animation_enemy(all, 5, 6);
    make_animation_enemy(all, 6, 7);
    make_animation_enemy(all, 7, 8);
    make_animation_enemy(all, 8, 9);
    make_animation_enemy(all, 9, 10);
    make_animation_enemy(all, 10, 11);
    make_animation_enemy(all, 11, 12);
    make_animation_enemy(all, 12, 13);
    make_animation_enemy(all, 13, 14);
}

void make_all(general_t *all)
{
    make_animation_ninja(all);
    first_make(all);
    make_animation_enemy(all, 14, 15);
    make_animation_enemy(all, 15, 16);
    make_animation_golem(all, 16, 17);
    make_animation_golem(all, 17, 18);
    make_animation_golem(all, 18, 19);
    make_animation_golem(all, 19, 20);
    make_animation_golem(all, 20, 21);
    make_animation_golem(all, 21, 22);
    make_animation_giant(all, 22, 23);
    make_animation_giant(all, 23, 24);
    sfSprite_setTextureRect(ENEMY[24].sprite->chara, ENEMY[24].sprite->rect);
    make_animation_effect(all);
}

void display_animation(window_t *win, general_t *all)
{
    make_all(all);
    first_display(all);
    sfRenderWindow_drawSprite(win->win, NINJA[0].sprite->chara, NULL);
    if (all->index_map == 1) {
        for (int i = 1; i != 5; i++)
            sfRenderWindow_drawSprite(win->win, ENEMY[i].sprite->chara, NULL);
        sfRenderWindow_drawSprite(win->win, ENEMY[22].sprite->chara, NULL);
        sfRenderWindow_drawSprite(win->win, ENEMY[24].sprite->chara, NULL);
    }
        if (all->index_map == 3)
            second_display(all, win);
        if (all->index_map == 4)
            third_display(all, win);
        if (all->index_map == 2)
            sfRenderWindow_drawSprite(win->win, ENEMY[23].sprite->chara, NULL);
    fourth_display(all);
}
