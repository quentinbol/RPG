/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** initalisation and set the sprite
*/

#include "rpg.h"

void malloc_structure(__attribute__ ((unused)) general_t *all)
{
    all->anima = malloc(sizeof(animation_t) * 25);
    all->anima->clock_create = malloc(sizeof(clock_struct) * 30);
    all->effect = malloc(sizeof(animation_effect_t));
    all->effect->fire = malloc(sizeof(effect_fire_t) * 5);
    all->effect->fire_2 = malloc(sizeof(effect_fire2_t) * 32);
    all->effect->spike = malloc(sizeof(effect_spike_t) * 11);
    all->anima[0].fight = malloc(sizeof(fight_t));
    all->anima[0].move = malloc(sizeof(movement_t));
    all->anima[0].sprite = malloc(sizeof(sprite_t));
    all->anima[0].state = malloc(sizeof(state_t));
    all->anima->start_fight = false;
}

void first_init(general_t *all)
{
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {170, 180}, 1);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1500, 220}, 2);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {950, 500}, 3);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1500, 700}, 4);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {250, 710}, 5);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {760, 530}, 6);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {240, 240}, 7);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1270, 80}, 8);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1270, 718}, 9);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1790, 1010}, 10);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1770, 390}, 11);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {420, 500}, 12);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1000, 500}, 13);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1400, 500}, 14);
    all->anima = create_enemy(all, (V) {1.5, 1.5}, (V) {1120, 500}, 15);
    all->anima = create_golem(all, (V) {2.5, 2.5}, (V) {400, 330}, 16);
}

void init_sprite_structure(general_t *all)
{
    malloc_structure(all);
    create_ninja(all);
    first_init(all);
    all->anima = create_golem(all, (V) {1.5, 1.5}, (V) {1275, 170}, 17);
    all->anima = create_golem(all, (V) {1.5, 1.5}, (V) {960, 170}, 18);
    all->anima = create_golem(all, (V) {1.5, 1.5}, (V) {860, 300}, 19);
    all->anima = create_golem(all, (V) {1.5, 1.5}, (V) {520, 240}, 20);
    all->anima = create_golem(all, (V) {2.5, 2.5}, (V) {237, 160}, 21);
    all->anima = create_giant(all, (V) {2, 2}, (V) {637, 500}, 22);
    all->anima = create_giant(all, (V) {2, 2}, (V) {850, 550}, 23);
    all->anima = create_pnj(all, (V) {2, 2}, (V) {207, 800}, 24);
    for (int i = 0; i != 26; i++)
        all->anima->clock_create[i].clock_item = sfClock_create();
}

void init_rect(general_t *all)
{
    NINJA[0].sprite->rect.top = 104;
    NINJA[0].sprite->rect.height = 194;
    NINJA[0].sprite->rect.width = 300;
    NINJA[0].sprite->rect.left = 10;
    for (int i = 1; i != 16; i++) {
        ENEMY[i].sprite->rect = init_enemy_rect(ENEMY[i].sprite->rect);
    }
    for (int i = 16; i != 22; i++) {
        ENEMY[i].sprite->rect = init_golem_rect(ENEMY[i].sprite->rect);
    }
    for (int i = 22; i != 24; i++)
        ENEMY[i].sprite->rect = init_giant_rect(ENEMY[i].sprite->rect);
    PNJ[24].sprite->rect = init_pnj_rect(PNJ[24].sprite->rect);
}

void init_sprite_rect_struct(general_t *all, window_t *win)
{
    init_sprite_structure(all);
    init_enemy_life(all, 23);
    init_effect_fire(all);
    init_effect_spike(all);
    init_effect_fire_2(all);
    init_rect(all);
    init_sound_effect(all);
    set_sprite(all, win);
}
