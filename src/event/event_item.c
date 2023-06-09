/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** item_event.c
*/

#include "rpg.h"

void diams(general_t *all, int serie, int nbr, int a)
{
    if (all->item->nbr_s1 > 9)
        all->item->nbr_s1 = 9;

    if (all->item->nbr_s2 > 9)
        all->item->nbr_s2 = 9;

    if (all->inv->nbr_item[a][0] > 9)
        all->inv->nbr_item[a][0] = 9;
}

void bouri(general_t *all, int serie, int nbr)
{
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == serie) {
            all->inv->nbr_item[a][0] += nbr;
            diams(all, serie, nbr, a);
            return;
        }
        if (all->inv->nbr_item[a][1] == 0) {
            all->inv->nbr_item[a][0] = nbr;
            all->inv->nbr_item[a][1] = serie;
            return;
        }
    }
}

void drop_to_inv(general_t *all, int serie, int nbr)
{
    if (tou(all, serie) != 84) {
        all->inv->nbr_item[tou(all, serie)][0] += nbr;
        diams(all, serie, nbr, tou(all, serie));
        return;
    }
    if (all->item->serie_1 == serie && serie < 8) {
        all->item->nbr_s1 += nbr;
        diams(all, serie, nbr, 1);
        return;
    }
    if (all->item->serie_2 == serie && serie < 8) {
        all->item->nbr_s2 += nbr;
        diams(all, serie, nbr, 1);
        return;
    }
    bouri(all, serie, nbr);
}

void event_sat_2(general_t *all, window_t *win, int x, int y)
{
    if (x > 1839 && x < 1897 && y > 56 && y < 129) {
        all->satt->ath_sat = 0;
    }
    if (x > 1616 && x < 1772 && y > 403 && y < 492) {
        all->satt->ath_sat = 0;
    }
}

void item_event(window_t *win, general_t *all)
{
    int x = win->evt.mouseButton.x;
    int y = win->evt.mouseButton.y;
    event_inv(win, all, x, y);
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        rage_event(all);
    }
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sat(all);
    if (all->satt->ath_sat == 84) {
        event_sat(all, win, x, y);
        event_sat_2(all, win, x, y);
    }
    if (sfKeyboard_isKeyPressed(sfKeyNum1))
        use_item_s1(all);
    if (sfKeyboard_isKeyPressed(sfKeyNum2))
        use_item_s2(all);
    cheat_code(all);
}
