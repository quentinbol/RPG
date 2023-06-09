/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** biggest_room
*/

#include "rpg.h"
void change_pos_fire_big_bis(general_t *all)
{
    sfSprite_setPosition(FIRE2[17].sprite, (V) {1830, 620});
    sfSprite_setPosition(FIRE2[18].sprite, (V) {710, 940});
    sfSprite_setPosition(FIRE2[19].sprite, (V) {805, 940});
    sfSprite_setPosition(FIRE2[20].sprite, (V) {1223, 940});
    sfSprite_setPosition(FIRE2[21].sprite, (V) {1318, 940});
    sfSprite_setPosition(FIRE2[22].sprite, (V) {1733, 940});
    sfSprite_setPosition(FIRE2[23].sprite, (V) {1830, 940});
    sfSprite_setPosition(FIRE2[24].sprite, (V) {199, 300});
    sfSprite_setPosition(FIRE2[25].sprite, (V) {295, 300});
    sfSprite_setPosition(FIRE2[26].sprite, (V) {199, 940});
    sfSprite_setPosition(FIRE2[27].sprite, (V) {295, 940});
    sfSprite_setPosition(FIRE2[28].sprite, (V) {199, 620});
    sfSprite_setPosition(FIRE2[29].sprite, (V) {295, 620});
}

void change_pos_fire_big(general_t *all)
{
    sfSprite_setPosition(FIRE2[0].sprite, (V) {710, -20});
    sfSprite_setPosition(FIRE2[1].sprite, (V) {805, -20});
    sfSprite_setPosition(FIRE2[2].sprite, (V) {1223, -20});
    sfSprite_setPosition(FIRE2[3].sprite, (V) {1318, -20});
    sfSprite_setPosition(FIRE2[4].sprite, (V) {1733, -20});
    sfSprite_setPosition(FIRE2[5].sprite, (V) {1830, -20});
    sfSprite_setPosition(FIRE2[6].sprite, (V) {710, 300});
    sfSprite_setPosition(FIRE2[7].sprite, (V) {805, 300});
    sfSprite_setPosition(FIRE2[8].sprite, (V) {1223, 300});
    sfSprite_setPosition(FIRE2[9].sprite, (V) {1318, 300});
    sfSprite_setPosition(FIRE2[10].sprite, (V) {1733, 300});
    sfSprite_setPosition(FIRE2[11].sprite, (V) {1830, 300});
    sfSprite_setPosition(FIRE2[12].sprite, (V) {710, 620});
    sfSprite_setPosition(FIRE2[13].sprite, (V) {805, 620});
    sfSprite_setPosition(FIRE2[14].sprite, (V) {1223, 620});
    sfSprite_setPosition(FIRE2[15].sprite, (V) {1318, 620});
    sfSprite_setPosition(FIRE2[16].sprite, (V) {1733, 620});
    change_pos_fire_big_bis(all);
}

void biggest_room_handling(general_t *all)
{
    change_pos_fire_big(all);
    for (int i = 30; i != 32; i++)
        sfSprite_setPosition(FIRE2[i].sprite, (V) {10000, 10000});
    for (int i = 0; i != 11; i++) {
        sfSprite_setPosition(SPIKE[i].sprite, (V) {10000, 10000});
        sfRectangleShape_setPosition(SPIKE[i].hitbox, (V) {10000, 10000});
    }
    for (int i = 0; i != 5; i++) {
        sfRectangleShape_setPosition(FIRE[i].hitbox, (V) {10000, 10000});
        sfSprite_setPosition(FIRE[i].sprite, (V) {10000, 10000});
    }
}
