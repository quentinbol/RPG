/*
** EPITECH PROJECT, 2023
** enemy_lifebar
** File description:
** true
*/

#include "rpg.h"

void chose(general_t *all, int i)
{
    if (i > 15 && i != 21) {
        all->item->scale2[i].x -= all->item->damaje;
        if (all->item->scale2[i].x < 0)
            all->item->scale2[i].x = 0;
        if (all->item->scale[i].x == 0) {
            ENEMY[i].state->is_dead = TRUE;
            all->item->favor[i][0]++;
        }
        if (all->item->favor[i][0] == 1)
            exp_gest(all, 200);
    }
    if (i > 15 && all->item->scale2[i].x == 0 && i != 21) {
        all->item->scale[i].x -= all->item->damaje;
        if (all->item->scale[i].x < 0)
            all->item->scale[i].x = 0;
    }
}

void set_enemy_hp(general_t *all, int i, int a)
{
    sfRectangleShape_setSize(all->item->lifebar_boss, all->item->scale_boss);
    if (i <= 15 && i != 21) {
        all->item->pos[i].x = ENEMY[i].move->enemie_pos.x - 50;
        all->item->pos[i].y = ENEMY[i].move->enemie_pos.y - 47;
        sfRectangleShape_setPosition(all->item->lif[i], all->item->pos[i]);
        sfRectangleShape_setScale(all->item->lif[i], all->item->scale[i]);
    }
    if (i > 15 && i != 21) {
        all->item->pos[i].x = ENEMY[i].move->enemie_pos.x - 50;
        all->item->pos[i].y = ENEMY[i].move->enemie_pos.y - 47;
        sfRectangleShape_setPosition(all->item->lif_go[i], all->item->pos[i]);
        all->item->pos[i].y -= 13;
        sfRectangleShape_setPosition(all->item->lif_go2[i], all->item->pos[i]);
        sfRectangleShape_setScale(all->item->lif_go[i], all->item->scale[i]);
        sfRectangleShape_setScale(all->item->lif_go2[i], all->item->scale2[i]);
    }
}

void hit_enemy(general_t *all, int i)
{
    i += 1;
    if (i <= 15 && i != 21) {
        all->item->scale[i].x -= all->item->damaje;
        if (all->item->scale[i].x < 0)
            all->item->scale[i].x = 0;
        if (all->item->scale[i].x == 0) {
            ENEMY[i].state->is_dead = TRUE;
            all->item->favor[i][0]++;
        }
        if (all->item->favor[i][0] == 1)
            exp_gest(all, 100);
    }
    chose(all, i);
}

void loopy(general_t *all)
{
    for (int a = 0; a != all->item->nbr_enemy + 1; a++) {
        all->item->scale[a] = (V) {10, 3};
        all->item->scale2[a] = (V) {10, 3};
        all->item->pos[a] = (V) {-100, -100};
        all->item->lif[a] = sfRectangleShape_create();
        all->item->lif_go[a] = sfRectangleShape_create();
        all->item->lif_go2[a] = sfRectangleShape_create();
        sfRectangleShape_setSize(all->item->lif[a], all->item->scale[a]);
        sfRectangleShape_setSize(all->item->lif_go[a], all->item->scale[a]);
        sfRectangleShape_setSize(all->item->lif_go2[a], all->item->scale[a]);
        sfRectangleShape_setFillColor(all->item->lif[a], sfGreen);
        sfRectangleShape_setFillColor(all->item->lif_go[a], sfGreen);
        sfRectangleShape_setFillColor(all->item->lif_go2[a], sfGreen);
        sfRectangleShape_setPosition(all->item->lif[a], all->item->pos[a]);
        sfRectangleShape_setPosition(all->item->lif_go[a], all->item->pos[a]);
        sfRectangleShape_setPosition(all->item->lif_go2[a], all->item->pos[a]);
        all->item->favor[a] = malloc(sizeof(int) * 2);
        all->item->favor[a][0] = 0;
        all->item->favor[a][1] = '\0';
    }
}

void init_enemy_life(general_t *all, int nbr)
{
    all->item->nbr_enemy = nbr + 1;
    all->item->lif = malloc(sizeof(sfRectangleShape *) * (nbr + 1));
    all->item->lif_go = malloc(sizeof(sfRectangleShape *) * (nbr + 1));
    all->item->lif_go2 = malloc(sizeof(sfRectangleShape *) * (nbr + 1));
    all->item->pos = malloc(sizeof(sfVector2f) * (nbr + 1));
    all->item->scale = malloc(sizeof(sfVector2f) * (nbr + 1));
    all->item->scale2 = malloc(sizeof(sfVector2f) * (nbr + 1));
    all->item->favor = malloc(sizeof(int *) * (nbr + 1));
    loopy(all);
}
