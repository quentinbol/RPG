/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** initialisation of the hitbox
*/

#include "rpg.h"

void init_attack_range(general_t *all)
{
    NINJA[0].fight->attack_range = create_attack_range(all,
                            NINJA[0].fight->attack_range,
                            NINJA[0].ajustement, 20);
    for (int i = 1; i != 16; i++) {
        ENEMY[i].fight->attack_range = create_attack_range(all,
        ENEMY[i].fight->attack_range, (V) {ENEMY[i].ajustement.x,
        ENEMY[i].ajustement.y}, 20);
    }
    for (int i = 16; i != 21; i++)
        ENEMY[i].fight->attack_range = create_attack_range(all,
        ENEMY[i].fight->attack_range, (V) {ENEMY[i].ajustement.x,
        ENEMY[i].ajustement.y}, 20);
    ENEMY[21].fight->attack_range = create_attack_range(all,
        ENEMY[21].fight->attack_range, (V) {ENEMY[21].ajustement.x,
        ENEMY[21].ajustement.y}, 21);
    for (int i = 22; i != 24; i++)
        ENEMY[i].fight->attack_range = create_attack_range(all,
        ENEMY[i].fight->attack_range, (V) {ENEMY[i].ajustement.x,
        ENEMY[i].ajustement.y}, 50);

}

void init_hitbox(general_t *all)
{
    NINJA[0].fight->hitbox = create_hitbox(all, NINJA[0].fight->hitbox,
                        (V) {NINJA[0].ajustement.x, NINJA[0].ajustement.y + 20}
                            , (V) {20, 40});
    for (int i = 1; i != 21; i++)
        ENEMY[i].fight->hitbox = create_hitbox(all, ENEMY[i].fight->hitbox,
                            (V) {ENEMY[i].ajustement.x - 30,
                            ENEMY[i].ajustement.y + 10}, (V) {50, 50});
    ENEMY[21].fight->hitbox = create_hitbox(all, ENEMY[21].fight->hitbox,
                            (V) {ENEMY[21].ajustement.x - 30,
                            ENEMY[21].ajustement.y + 10}, (V) {170, 170});
    for (int i = 22; i != 24; i++)
        ENEMY[i].fight->hitbox = create_hitbox(all, ENEMY[i].fight->hitbox,
                            (V) {ENEMY[i].ajustement.x - 30,
                            ENEMY[i].ajustement.y + 10}, (V) {50, 100});
    for (int i = 0; i != 5; i++)
        all->effect->fire[i].hitbox = create_hitbox(all,
                all->effect->fire[i].hitbox,
                (V) {FIRE[i].pos.x + 25, FIRE[i].pos.y + 40} , (V) {10, 40});
    for (int i = 0; i != 11; i++)
        all->effect->spike[i].hitbox = create_hitbox(all,
            all->effect->spike[i].hitbox,
            (V) {SPIKE[i].pos.x + 10, SPIKE[i].pos.y + 115}, (V) {10, 5});
}

void init_agro_hitbox(general_t *all)
{
    for (int i = 1; i != 16; i++) {
        ENEMY[i].fight->agro_hitbox = create_agro_hitbox(all,
        ENEMY[i].fight->agro_hitbox, (V) {ENEMY[i].ajustement.x + 140,
        ENEMY[i].ajustement.y + 160}, 100);
    }
    for (int i = 16; i != 21; i++) {
        ENEMY[i].fight->agro_hitbox = create_agro_hitbox(all,
        ENEMY[i].fight->agro_hitbox, (V) {ENEMY[i].ajustement.x - 1000,
        ENEMY[i].ajustement.y - 1000}, 1000);
    }
    for (int i = 22; i != 24; i++) {
        ENEMY[i].fight->agro_hitbox = create_agro_hitbox(all,
        ENEMY[i].fight->agro_hitbox, (V) {ENEMY[i].ajustement.x + 140,
        ENEMY[i].ajustement.y + 160}, 100);
    }
    ENEMY[21].fight->agro_hitbox = create_agro_hitbox(all,
    ENEMY[21].fight->agro_hitbox, (V) {ENEMY[21].ajustement.x + 140,
    ENEMY[21].ajustement.y + 160}, 150);
}

void hitbox_handle(general_t *all)
{
    init_attack_range(all);
    init_hitbox(all);
    init_agro_hitbox(all);
    if (IS_RUNNING_BACK) {
        sfRectangleShape_setScale(NINJA[0].fight->hitbox, (V) {-1, 1});
        sfCircleShape_setScale(NINJA[0].fight->attack_range, (V) {-1, 1});
        sfSprite_setScale(NINJA[0].sprite->chara, (V) {-0.30, 0.30});
    } else {
        sfSprite_setScale(NINJA[0].sprite->chara
                        , (V) {0.30, 0.30});
        sfRectangleShape_setScale(NINJA[0].fight->hitbox, (V) {1, 1});
        sfCircleShape_setScale(NINJA[0].fight->attack_range, (V) {1, 1});
    }
    change_orientation_items(all);
}
