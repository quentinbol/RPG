/*
** EPITECH PROJECT, 2023
** set_origin
** File description:
** my_rpg
*/

#include "rpg.h"

void set_origin_to_character_golem(general_t *all, int i)
{
    ENEMY[i].ajustement = sfSprite_getPosition(ENEMY[i].sprite->chara);
    ENEMY[i].move->enemie_pos = (V) {ENEMY[i].ajustement.x,
                                    ENEMY[i].ajustement.y};
    if (ENEMY[i].i < 1) {
        ENEMY[i].origin = sfSprite_getOrigin(ENEMY[i].sprite->chara);
        ENEMY[i].i++;
    }
    sfSprite_setOrigin(ENEMY[i].sprite->chara,
                (V) {ENEMY[i].origin.x + 25, ENEMY[i].origin.y + 27});
}

void set_origin_to_character_enemy(general_t *all, int i)
{
    ENEMY[i].ajustement = sfSprite_getPosition(ENEMY[i].sprite->chara);
    ENEMY[i].move->enemie_pos = (V) {ENEMY[i].ajustement.x,
                                    ENEMY[i].ajustement.y};
    if (ENEMY[i].i < 1) {
        ENEMY[i].origin = sfSprite_getOrigin(ENEMY[i].sprite->chara);
        ENEMY[i].i++;
    }
    sfSprite_setOrigin(ENEMY[i].sprite->chara,
                (V) {ENEMY[i].origin.x + 17, ENEMY[i].origin.y + 17});
}

void set_origin_to_character_giant(general_t *all, int i)
{
    ENEMY[i].ajustement = sfSprite_getPosition(ENEMY[i].sprite->chara);
    ENEMY[i].move->enemie_pos = (V) {ENEMY[i].ajustement.x,
                                    ENEMY[i].ajustement.y};
    if (ENEMY[i].i < 1) {
        ENEMY[i].origin = sfSprite_getOrigin(ENEMY[i].sprite->chara);
        ENEMY[i].i++;
    }
    sfSprite_setOrigin(ENEMY[i].sprite->chara,
                (V) {ENEMY[i].origin.x + 27, ENEMY[i].origin.y + 27});
    get_origin(all, ENEMY[i].move->enemie_pos, i);
}

void set_origin_to_character_ninja(general_t *all)
{
    NINJA[0].ajustement = sfSprite_getPosition(NINJA[0].sprite->chara);
    if (NINJA[0].i < 1) {
        NINJA[0].origin = sfSprite_getOrigin(NINJA[0].sprite->chara);
        NINJA[0].i++;
    }
    sfSprite_setOrigin(NINJA[0].sprite->chara,
                (V) {NINJA[0].origin.x + 130, NINJA[0].origin.y + 105});
}
