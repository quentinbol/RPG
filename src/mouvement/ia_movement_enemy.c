/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** ia_movement
*/

#include "rpg.h"

void ia_enemy(general_t *all, int i, int id_clock, int state)
{
    float speed = 0.0f;
    sfVector2f direction = sfvectorf_subtract((V) {NINJA[0].ajustement.x,
    NINJA[0].ajustement.y}, ENEMY[i].move->enemie_pos);
    direction = sfvectorf_normalize(direction);
    if (state == 1)
        speed = all->objj->spid;
    if (state == 2)
        speed = 1.0f;
    if (state == 3)
        speed = 1.0f;
    direction = sfvectorf_multiply(direction, speed);
    ENEMY[i].move->enemie_pos = sfvectorf_add(ENEMY[0].move->enemie_pos,
                                            (V) {direction.x, direction.y});
    sfSprite_move(ENEMY[i].sprite->chara, (V) {direction.x, direction.y});
    if (state == 1)
        animation_enemy_moving(all, i, id_clock);
    if (state == 2)
        animation_golem_moving(all, i, id_clock);
    if (state == 3)
        animation_giant_moving(all, i , id_clock);
}

void change_direction(general_t *all, int i)
{
    if (all->index_map == 1) {
        ENEMY[i].move->new_direction.x = rand() % 3 - 1;
        ENEMY[i].move->new_direction.y = rand() % 3 - 1;
    }
    if (all->index_map == 3 || i == 23) {
            ENEMY[i].move->new_direction.x = 0.f;
            ENEMY[i].move->new_direction.y = rand() % 3 - 1;
    }
    if (all->index_map == 4) {
            ENEMY[i].move->new_direction.x = rand() % 3 - 1;
            ENEMY[i].move->new_direction.y = 0.f;
    }
}
