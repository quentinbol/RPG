/*
** EPITECH PROJECT, 2023
** init stat
** File description:
** true
*/

#include "rpg.h"

void init_str(general_t *all)
{
    all->satt->str = malloc(sizeof(char *) * 5);
    for (int a = 0; a != 5; a++) {
        all->satt->str[a] = malloc(sizeof(char) * 2);
        all->satt->str[a][0] = '0';
        all->satt->str[a][1] = '\0';
    }
    sfText_setString(all->satt->healt, all->satt->str[0]);
    sfText_setString(all->satt->damage, all->satt->str[1]);
    sfText_setString(all->satt->speed, all->satt->str[2]);
    sfText_setString(all->satt->level, all->satt->str[3]);
    sfText_setString(all->satt->nbr_point_text, all->satt->str[4]);
}

void init_level(general_t *all)
{
    all->satt->level = my_get_text("0", (V) {300, 100}, (V) {2, 2});
    all->satt->level3 = my_get_text("0", (V) {150, 150}, (V) {2, 2});
    all->satt->lekel = my_get_text("Level", (V) {20, 150}, (V) {2, 2});
    all->satt->nbr_point_text = my_get_text("0", (V) {20, 150}, (V) {2, 2});
    sfText_setOutlineThickness(all->satt->level, 3);
    sfText_setOutlineColor(all->satt->level, sfWhite);
    sfText_setOutlineThickness(all->satt->level3, 3);
    sfText_setOutlineColor(all->satt->level3, sfWhite);
    sfText_setOutlineThickness(all->satt->lekel, 3);
    sfText_setOutlineColor(all->satt->lekel, sfWhite);
    sfText_setOutlineThickness(all->satt->nbr_point_text, 3);
    sfText_setOutlineColor(all->satt->nbr_point_text, sfWhite);
    sfText_setColor(all->satt->level, sfBlue);
    sfText_setColor(all->satt->level3, sfBlue);
    sfText_setColor(all->satt->lekel, sfBlue);
    sfText_setColor(all->satt->nbr_point_text, sfBlack);
}

void init_seven(general_t *all)
{
    init_level(all);
    sfText_setFont(all->satt->healt, all->item->font);
    sfText_setFont(all->satt->healt, all->item->font);
    sfText_setFont(all->satt->damage, all->item->font);
    sfText_setFont(all->satt->speed, all->item->font);
    init_str(all);
    sfText_setScale(all->satt->healt, (V) {2, 2});
    sfText_setScale(all->satt->damage, (V) {2, 2});
    sfText_setScale(all->satt->speed, (V) {2, 2});
    sfText_setColor(all->satt->healt, sfRed);
    sfText_setColor(all->satt->damage, sfRed);
    sfText_setColor(all->satt->speed, sfRed);
}

void init_six(general_t *all)
{
    all->satt->level = sfText_create();
    all->satt->level3 = sfText_create();
    all->satt->nbr_point_text = sfText_create();
    all->satt->healt = sfText_create();
    all->satt->damage = sfText_create();
    all->satt->speed = sfText_create();
    all->satt->plac = sfSprite_create();
    all->satt->heart = sfSprite_create();
    all->satt->sword = sfSprite_create();
    all->satt->booth = sfSprite_create();
    all->satt->plac = my_get_sprite("assets/items/back_stat.png",
        (V) {1480, 20}, (V) {1, 1.5});
    all->satt->heart = my_get_sprite("assets/items/heart.png",
        (V) {1620, 120}, (V) {0.1, 0.1});
    all->satt->sword = my_get_sprite("assets/items/sword.png",
        (V) {1600, 180}, (V) {0.2, 0.2});
    all->satt->booth = my_get_sprite("assets/items/boots.png",
        (V) {1600, 300}, (V) {0.15, 0.15});
    init_seven(all);
}

void init_five(general_t *all)
{
    all->item->lifebar = sfRectangleShape_create();
    all->item->lifebar_bor = sfRectangleShape_create();
    all->item->health_potion = sfSprite_create();
    all->item->damage_potion = sfSprite_create();
    all->item->tex_1 =
        sfTexture_createFromFile("assets/items/health_potion.png", NULL);
    all->item->tex_2 =
        sfTexture_createFromFile("assets/items/damage_potion.png", NULL);
    all->item->bordur = sfSprite_create();
    all->item->bordur_2 = sfSprite_create();
    all->item->tex_bor1 =
        sfTexture_createFromFile("assets/items/cadre.png", NULL);
    all->item->tex_bor2 =
        sfTexture_createFromFile("assets/items/cadre.png", NULL);
        all->item->nbr_1 = sfText_create();
        all->item->nbr_2 = sfText_create();
        all->item->font = sfFont_createFromFile("assets/Font/font.ttf");
    init_boss_lifebar(all);
    init_six(all);
    init_height(all);
}
