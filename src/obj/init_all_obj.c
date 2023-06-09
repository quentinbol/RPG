/*
** EPITECH PROJECT, 2023
** init obj
** File description:
** true
*/

#include "rpg.h"

void ini_obj_2(general_t *all)
{
    sfVector2f q = {0.4, 0.4};
    all->objj->gold = sfSprite_create();
    all->objj->gold = my_get_sprite
    ("assets/items/gold.png", q, (V) {0.15, 0.15});
    all->objj->coal = sfSprite_create();
    all->objj->coal = my_get_sprite
    ("assets/items/coal.png", q, (V) {0.2, 0.2});
    all->objj->keyy = sfSprite_create();
    all->objj->keyy = my_get_sprite
    ("assets/items/key.png", q, (V) {0.1, 0.1});
    all->objj->ko = sfSprite_create();
    all->objj->ko = my_get_sprite
        ("assets/items/ko.png", q, (V) {0.08, 0.08});
    all->objj->anal = malloc(sizeof(int *) * 100);
    for (int a = 0; a != 100; a++) {
        all->objj->anal[a] = malloc(sizeof(int) * 2);
        all->objj->anal[a][0] = 0;
        all->objj->anal[a][1] = 0;
        all->objj->anal[a][2] = '\0';
    }
}

void init_all_obj(general_t *all)
{
    sfVector2f q = {0.4, 0.4};
    all->objj->exp_potion = sfSprite_create();
    all->objj->exp_potion = my_get_sprite("assets/items/exp_potion.png", q, q);
    all->objj->speed_potion = sfSprite_create();
    all->objj->speed_potion = my_get_sprite
    ("assets/items/speed_potion.png", q, (V) {0.11, 0.11});
    all->objj->guerison = sfSprite_create();
    all->objj->guerison = my_get_sprite
    ("assets/items/guerison.png", q, (V) {1.1, 1.1});
    all->objj->fouet = sfSprite_create();
    all->objj->fouet = my_get_sprite
    ("assets/items/fouet.png", q, (V) {0.2, 0.2});
    all->objj->glu = sfSprite_create();
    all->objj->glu = my_get_sprite
    ("assets/items/glu.png", q, (V) {0.1, 0.1});
    all->objj->stun = sfSprite_create();
    all->objj->stun = my_get_sprite
    ("assets/items/stun.png", q, (V) {0.11, 0.11});
    ini_obj_2(all);
}
