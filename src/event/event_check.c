/*
** EPITECH PROJECT, 2023
** my_event_check.c
** File description:
** to check the events
*/

#include "rpg.h"

static int my_key_input_parse(window_t *win, general_t *all)
{
    char *tab[] = {"Congrats", "You add quest !", NULL};

    event_player_mouvement(all);
    item_event(win, all);
    if (sfMouse_isButtonPressed(sfMouseLeft) && !IS_DEAD)
        event_player_attack(all);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        process_pause(all, win);
    if (sfKeyboard_isKeyPressed(sfKeyP))
        add_quests(all->quest, tab, (all->quest->size + 1));
    if (sfKeyboard_isKeyPressed(sfKeyO))
        delete_quests(all->quest, 0);
    return 0;
}

int my_event_check(window_t *win, general_t *all)
{
    if (win->evt.type == sfEvtClosed)
        sfRenderWindow_close(win->win);
    if (KEY_PRESSED || MOUSE_PRESSED)
        my_key_input_parse(win, all);
    if (win->evt.type == sfEvtKeyReleased)
        event_player_stop_moving(all);
    return 0;
}
