/*
** EPITECH PROJECT, 2023
** loop inv
** File description:
** true
*/

#include "rpg.h"

void loopy_0(general_t *all)
{
    sfSprite_setPosition(all->inv->erfunden, (V) {3000, 3000});
    sfSprite_setPosition(all->inv->plaky[0], (V) {3000, 3000});
    sfSprite_setPosition(all->inv->plaky[1], (V) {3000, 3000});
    sfText_setPosition(all->inv->usy[0], (V) {3000, 3000});
    sfText_setPosition(all->inv->usy[1], (V) {3000, 3000});
    sfSprite_setPosition(all->inv->tex_bor1, (V) {3000, 3000});
    sfSprite_setPosition(all->inv->tex_bor2, (V) {3000, 3000});
    sfText_setPosition(all->inv->nbr_1, (V) {3000, 3000});
    sfText_setPosition(all->inv->nbr_2, (V) {3000, 3000});
    for (int a = 0; a != 20; a++) {
        sfRectangleShape_setPosition(all->inv->cell[a], (V) {3000, 3000});
        sfText_setPosition(all->inv->nbr_cell[a], (V) {3000, 3000});
    }
}

void loopy_85(general_t *all)
{
    for (int a = 0; a != 20; a++) {
        all->inv->str_cell[a][0] = all->inv->nbr_item[a][0] + 48;
    }
}

static void init_pos_erfunden(general_t *all)
{
    sfSprite_setPosition(all->inv->erfunden, (V) {650, 100});
    sfSprite_setPosition(all->inv->plaky[0], (V) {700, 730});
    sfSprite_setPosition(all->inv->plaky[1], (V) {700, 800});
    sfText_setPosition(all->inv->usy[0], (V) {770, 750});
    sfText_setPosition(all->inv->usy[1], (V) {760, 820});
    sfSprite_setPosition(all->inv->tex_bor1, (V) {950, 740});
    sfSprite_setPosition(all->inv->tex_bor2, (V) {1100, 740});
    sfText_setPosition(all->inv->nbr_1, (V) {1010, 770});
    sfText_setPosition(all->inv->nbr_2, (V) {1154, 770});
}

void loopy_84(general_t *all)
{
    sfVector2f posi = {760, 185};
    sfVector2f pos = {700, 150};

    init_pos_erfunden(all);
    for (int a = 0; a != 20; a++) {
        sfRectangleShape_setPosition(all->inv->cell[a], pos);
        sfText_setPosition(all->inv->nbr_cell[a], posi);
        pos.x += 140;
        posi.x += 140;
        if (a == 3 || a == 7 || a == 11 || a == 15) {
            pos.x = 700;
            pos.y += 120;
            posi.x = 760;
            posi.y += 120;
        }
        sfText_setString(all->inv->nbr_cell[a], all->inv->str_cell[a]);
    }
    loopy_85(all);
}

void loopy_erf_one(general_t *all)
{
    if (all->inv->boulo == 0)
        loopy_0(all);
    if (all->inv->boulo == 84)
        loopy_84(all);
}
