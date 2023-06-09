/*
** EPITECH PROJECT, 2023
** satt
** File description:
** true
*/

#include "rpg.h"

void cheat_code(general_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyNumpad1))
        drop_to_inv(all, 1, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad2))
        drop_to_inv(all, 2, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad3))
        drop_to_inv(all, 3, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad4))
        drop_to_inv(all, 4, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad5))
        drop_to_inv(all, 5, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad6))
        drop_to_inv(all, 6, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad7))
        drop_to_inv(all, 7, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad8))
        drop_to_inv(all, 8, 3);
    if (sfKeyboard_isKeyPressed(sfKeyNumpad9))
        drop_to_inv(all, 9, 3);
    if (sfKeyboard_isKeyPressed(sfKeyK))
        drop_to_inv(all, 10, 1);
}
