/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** everything for the hitbox
*/

#include "rpg.h"

void change_elements_in_map(general_t *all)
{
    if (all->index_map == 1)
        main_room_handling(all);
    if (all->index_map == 2)
        upper_room_handling(all);
    if (all->index_map == 3)
        biggest_room_handling(all);
    if (all->index_map == 4)
        boss_room_handling(all);
}

void display_hitbox(window_t *win, general_t *all, map_t *carte)
{
    hitbox_handle(all);
    change_elements_in_map(all);
    collision_handling(all, carte);
    ENEMY[0].move->enemie_pos = sfSprite_getPosition(ENEMY[1].sprite->chara);
}
