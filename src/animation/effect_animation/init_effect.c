/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init effect
*/

#include "rpg.h"

void init_create_fire_2bis(general_t *all)
{
    FIRE2 = create_fire_2(all, 16, (V) {1230, 830});
    FIRE2 = create_fire_2(all, 17, (V) {1520, 770});
    FIRE2 = create_fire_2(all, 18, (V) {1810, 935});
    FIRE2 = create_fire_2(all, 19, (V) {1735, 75});
    FIRE2 = create_fire_2(all, 20, (V) {1637, 75});
    FIRE2 = create_fire_2(all, 21, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 22, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 23, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 24, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 25, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 26, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 27, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 28, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 29, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 30, (V) {10000, 10000});
    FIRE2 = create_fire_2(all, 31, (V) {10000, 10000});
}

void init_create_fire_2(general_t *all)
{
    FIRE2 = create_fire_2(all, 0, (V) {623, 676});
    FIRE2 = create_fire_2(all, 1, (V) {94, 770});
    FIRE2 = create_fire_2(all, 2, (V) {367, 450});
    FIRE2 = create_fire_2(all, 3, (V) {302, 160});
    FIRE2 = create_fire_2(all, 4, (V) {525, 225});
    FIRE2 = create_fire_2(all, 5, (V) {750, 610});
    FIRE2 = create_fire_2(all, 6, (V) {877, 900});
    FIRE2 = create_fire_2(all, 7, (V) {910, 320});
    FIRE2 = create_fire_2(all, 8, (V) {1040, 610});
    FIRE2 = create_fire_2(all, 9, (V) {1200, 170});
    FIRE2 = create_fire_2(all, 10, (V) {1254, 75});
    FIRE2 = create_fire_2(all, 11, (V) {1445, 75});
    FIRE2 = create_fire_2(all, 12, (V) {1542, 75});
    FIRE2 = create_fire_2(all, 13, (V) {1807, 133});
    FIRE2 = create_fire_2(all, 14, (V) {1808, 327});
    FIRE2 = create_fire_2(all, 15, (V) {1488, 329});
    init_create_fire_2bis(all);
}

void init_effect_fire_2(general_t *all)
{
    init_create_fire_2(all);
    for (int i = 0; i != 32; i++)
        FIRE2[i].rect = init_fire2_rect(FIRE2[i].rect);
}

void init_effect_fire(general_t *all)
{
    FIRE = create_fire(all, 0, (V) {355, 670});
    FIRE = create_fire(all, 1, (V) {420, 490});
    FIRE = create_fire(all, 2, (V) {570, 170});
    FIRE = create_fire(all, 3, (V) {220, 590});
    FIRE = create_fire(all, 4, (V) {1500, 470});
    for (int i = 0; i != 5; i++)
        FIRE[i].rect = init_fire2_rect(FIRE[i].rect);
}

void init_effect_spike(general_t *all)
{
    SPIKE = create_spike(all, 0, (V) {591, 799});
    SPIKE = create_spike(all, 1, (V) {690, 770});
    SPIKE = create_spike(all, 2, (V) {465, 505});
    SPIKE = create_spike(all, 3, (V) {690, 420});
    SPIKE = create_spike(all, 4, (V) {205, 160});
    SPIKE = create_spike(all, 5, (V) {465, 290});
    SPIKE = create_spike(all, 6, (V) {900, 250});
    SPIKE = create_spike(all, 7, (V) {1010, 600});
    SPIKE = create_spike(all, 8, (V) {1235, 310});
    SPIKE = create_spike(all, 9, (V) {1325, 450});
    SPIKE = create_spike(all, 10, (V) {1390, 135});
    for (int i = 0; i != 11; i++)
        SPIKE[i].rect = init_spike_rect(SPIKE[i].rect);
}
