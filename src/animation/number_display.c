/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** rpg
*/

#include "rpg.h"

void third_display(general_t *all, window_t *win)
{
    for (int i = 12; i != 22; i++)
        sfRenderWindow_drawSprite(win->win, ENEMY[i].sprite->chara, NULL);
}

void second_display(general_t *all, window_t *win)
{
    for (int i = 5; i != 12; i++)
        sfRenderWindow_drawSprite(win->win, ENEMY[i].sprite->chara, NULL);
}

void first_display(general_t *all)
{
    for (int i = 0; i != 32; i++) {
        sfRenderWindow_drawSprite(all->win->win, FIRE2[i].sprite, 0);
    }
    for (int i = 1; i != 16; i++)
        sfSprite_setPosition(ENEMY[i].sprite->chara,
            ENEMY[i].move->enemie_pos);
}

void fourth_display(general_t *all)
{
    for (int i = 0; i != 5; i++) {
        sfRenderWindow_drawSprite(all->win->win, FIRE[i].sprite, 0);
    }
    for (int i = 0; i != 11; i++)
        sfRenderWindow_drawSprite(all->win->win, SPIKE[i].sprite, 0);
}

void set_sprite(general_t *all, window_t *win)
{
    sfSprite_setScale(NINJA[0].sprite->chara, NINJA[0].sprite->size);
    sfSprite_setPosition(NINJA[0].sprite->chara, NINJA[0].sprite->pos);
    for (int i = 1; i != 25; i++) {
        sfSprite_setScale(ENEMY[i].sprite->chara, ENEMY[i].sprite->size);
        sfSprite_setPosition(ENEMY[i].sprite->chara, ENEMY[i].sprite->pos);
    }
    for (int i = 0; i != 5; i++) {
        sfSprite_setPosition(FIRE[i].sprite, FIRE[i].pos);
        sfSprite_setScale(FIRE[i].sprite, (V) {0.5, 0.5});
    }
    for (int i = 0; i != 32; i++) {
        sfSprite_setPosition(FIRE2[i].sprite, FIRE2[i].pos);
        sfSprite_setScale(FIRE2[i].sprite, (V) {0.2, 0.2});
    }
    for (int i = 0; i != 11; i++) {
        sfSprite_setPosition(SPIKE[i].sprite, SPIKE[i].pos);
        sfSprite_setScale(SPIKE[i].sprite, (V) {0.7, 0.7});
    }
}
