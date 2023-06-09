/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** upper_room
*/

#include "rpg.h"

void change_pos_fire_main(general_t *all)
{
    sfSprite_setPosition(FIRE2[0].sprite, (V) {782, 435});
    sfSprite_setPosition(FIRE2[1].sprite, (V) {927, 435});
    sfSprite_setPosition(FIRE2[2].sprite, (V) {927, 235});
    sfSprite_setPosition(FIRE2[3].sprite, (V) {940, 770});
    sfSprite_setPosition(FIRE2[4].sprite, (V) {940, 290});
    sfSprite_setPosition(FIRE2[5].sprite, (V) {765, 290});
}

void upper_room_handling(general_t *all)
{
    change_pos_fire_main(all);
    for (int i = 6; i != 32; i++)
        sfSprite_setPosition(FIRE2[i].sprite, (V) {10000, 10000});
    sfSprite_setPosition(FIRE[0].sprite, (V) {680, 530});
    sfRectangleShape_setPosition(FIRE[0].hitbox, (V) {(680 + 30), (530 + 20)});
    sfSprite_setPosition(FIRE[2].sprite, (V) {1000, 530});
    sfRectangleShape_setPosition(FIRE[2].hitbox, (V) {(1000 + 30), (530 + 20)});
    for (int i = 3; i != 5; i++) {
        sfRectangleShape_setPosition(FIRE[i].hitbox, (V) {10000, 10000});
        sfSprite_setPosition(FIRE[i].sprite, (V) {10000, 10000});
    }
    sfSprite_setPosition(SPIKE[0].sprite, (V) {825, 350});
    sfRectangleShape_setPosition(SPIKE[0].hitbox, (V) {(825 + 10), (350 + 20)});
    sfSprite_setPosition(SPIKE[1].sprite, (V) {870, 350});
    sfRectangleShape_setPosition(SPIKE[1].hitbox, (V) {(870 + 10), (350 + 20)});
    for (int i = 2; i != 11; i++) {
        sfSprite_setPosition(SPIKE[i].sprite, (V) {10000, 10000});
        sfRectangleShape_setPosition(SPIKE[i].hitbox, (V) {10000, 10000});
    }
}
