/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** change orientation of object
*/

#include "rpg.h"

void if_sup_not_agro(general_t *all, int i, float size)
{
    if (ENEMY[i].ajustement.x > NINJA[0].ajustement.x
    && ENEMY[i].move->new_direction.x != -1 && !__AGRO_HITBOX) {
        sfSprite_setScale(ENEMY[i].sprite->chara, (V) {size, size});
        sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {1, 1});
    }
    if (ENEMY[i].ajustement.x > NINJA[0].ajustement.x
        && ENEMY[i].move->new_direction.x == -1) {
            sfSprite_setScale(ENEMY[i].sprite->chara, (V) {-size, size});
            sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {-1, 1});
    }
}

void if_sup_agro(general_t *all, int i, float size)
{
    if (ENEMY[i].ajustement.x > NINJA[0].ajustement.x
        && ENEMY[i].move->new_direction.x != -1 && __AGRO_HITBOX) {
        sfSprite_setScale(ENEMY[i].sprite->chara, (V) {-size, size});
        sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {-1, 1});
    }
    if (ENEMY[i].ajustement.x < NINJA[0].ajustement.x
        && ENEMY[i].move->new_direction.x == -1 && __AGRO_HITBOX) {
        sfSprite_setScale(ENEMY[i].sprite->chara, (V) {size, size});
        sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {1, 1});
    }
}

void if_inf_not_agro(general_t *all, int i, float size)
{
    if (ENEMY[i].ajustement.x < NINJA[0].ajustement.x
        && ENEMY[i].move->new_direction.x == -1) {
        sfSprite_setScale(ENEMY[i].sprite->chara, (V) {-size, size});
        sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {-1, 1});
    }
    if (ENEMY[i].ajustement.x < NINJA[0].ajustement.x
        && ENEMY[i].move->new_direction.x != -1) {
        sfSprite_setScale(ENEMY[i].sprite->chara, (V) {size, size});
        sfCircleShape_setScale(ENEMY[i].fight->attack_range, (V) {1, 1});
    }
}

void first_orientation(general_t *all)
{
    for (int i = 1; i != 21; i++)
        if (!ENEMY[i].state->is_dead) {
            if_inf_not_agro(all, i, 2.5);
            if_sup_agro(all, i, 2.5);
            if_sup_not_agro(all, i, 2.5);
        }
    for (int i = 16; i != 21; i++) {
        if (!ENEMY[i].state->is_dead) {
            if_inf_not_agro(all, i, 1.5);
            if_sup_agro(all, i, 1.5);
            if_sup_not_agro(all, i, 1.5);
        }
    }
}

void change_orientation_items(general_t *all)
{
    first_orientation(all);
    for (int i = 21; i != 22; i++)
        if (!ENEMY[i].state->is_dead) {
            if_inf_not_agro(all, i, 6);
            if_sup_agro(all, i, 6);
            if_sup_not_agro(all, i, 6);
        }
    for (int i = 22; i != 24; i++)
        if (!ENEMY[i].state->is_dead) {
            if_inf_not_agro(all, i, 6);
            if_sup_agro(all, i, 6);
            if_sup_not_agro(all, i, 6);
        }
}
