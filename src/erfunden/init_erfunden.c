/*
** EPITECH PROJECT, 2023
** init inv
** File description:
** true
*/

#include "rpg.h"

void init_inv_e(general_t *all)
{
    for (int a = 0; a != 20; a++) {
        all->inv->nbr_cell[a] = my_get_text(all->inv->str_cell[a],
        (V) {760, 185}, (V) {1.6, 1.6});
        sfText_setColor(all->inv->nbr_cell[a], sfRed);
        sfText_setOutlineThickness(all->inv->nbr_cell[a], 1.5);
        sfText_setOutlineColor(all->inv->nbr_cell[a], sfWhite);
    }
}

void init_inv_d(general_t *all)
{
    all->inv->tex_bor1 = sfSprite_create();
    all->inv->tex_bor2 = sfSprite_create();
    all->inv->nbr_1 = sfText_create();
    all->inv->nbr_2 = sfText_create();
    all->inv->tex_bor1 = my_get_sprite("assets/items/cadre.png",
                (V) {650, 100}, (V) {1.5, 1.5});
    all->inv->tex_bor2 = my_get_sprite("assets/items/cadre.png",
                (V) {650, 100}, (V) {1.5, 1.5});
    all->inv->nbr_1 = my_get_text("1", (V) {650, 100}, (V) {1.6, 1.6});
    all->inv->nbr_2 = my_get_text("2", (V) {650, 100}, (V) {1.6, 1.6});
    sfText_setColor(all->inv->nbr_1, sfRed);
    sfText_setColor(all->inv->nbr_2, sfRed);
}

void init_inv_c(general_t *all)
{
    all->inv->plaky = malloc(sizeof(sfSprite *) * 2);
    all->inv->usy = malloc(sizeof(sfText *) * 2);
    for (int a = 0; a != 2; a++) {
        all->inv->plaky[a] = sfSprite_create();
        all->inv->usy[a] = sfText_create();
        sfText_setFont(all->inv->usy[a], all->item->font);
        all->inv->plaky[a] = my_get_sprite("assets/items/plaky.png",
                (V) {650, 100}, (V) {1, 1});
    }
    all->inv->usy[0] = my_get_text("Use", (V) {650, 100}, (V) {1, 1});
    all->inv->usy[1] = my_get_text("Throw", (V) {650, 100}, (V) {1, 1});
}

void init_inv_b(general_t *all)
{
    sfRectangleShape_setPosition(all->inv->cell[0], (V) {700, 150});
    sfRectangleShape_setSize(all->inv->cell[0], (V) {80, 80});
    sfRectangleShape_setOutlineThickness(all->inv->cell[0], 10);
    sfRectangleShape_setFillColor(all->inv->cell[0], sfTransparent);
    sfRectangleShape_setOutlineColor(all->inv->cell[0], sfWhite);
    for (int a = 1; a != 20; a++) {
        sfRectangleShape_setPosition(all->inv->cell[a], (V) {700, 150});
        sfRectangleShape_setSize(all->inv->cell[a], (V) {80, 80});
        sfRectangleShape_setOutlineThickness(all->inv->cell[a], 10);
        sfRectangleShape_setFillColor(all->inv->cell[a], sfTransparent);
        sfRectangleShape_setOutlineColor(all->inv->cell[a], sfWhite);
    }
    init_inv_c(all);
    init_inv_d(all);
    init_inv_e(all);
}

void init_inv_a(general_t *all)
{
    all->inv->walacpamoi = 0;
    all->inv->erfunden = my_get_sprite("assets/items/inv_fond.jpg",
                (V) {650, 100}, (V) {1, 1});
    all->inv->cell = malloc(sizeof(sfRectangleShape *) * 20);
    all->inv->nbr_cell = malloc(sizeof(sfText *) * 20);
    all->inv->str_cell = malloc(sizeof(char *) * 20);
    all->inv->nbr_item = malloc(sizeof(int *) * 20);
    for (int a = 0; a != 20; a++) {
        all->inv->cell[a] = sfRectangleShape_create();
        all->inv->nbr_cell[a] = sfText_create();
        all->inv->nbr_item[a] = malloc(sizeof(int) * 4);
        all->inv->str_cell[a] = malloc(sizeof(int) * 2);
        all->inv->str_cell[a][0] = '0';
        all->inv->str_cell[a][1] = '\0';
        all->inv->nbr_item[a][0] = 0;
        all->inv->nbr_item[a][1] = 0;
        all->inv->nbr_item[a][2] = 0;
        all->inv->nbr_item[a][3] = '\0';
    }
    init_inv_b(all);
}
