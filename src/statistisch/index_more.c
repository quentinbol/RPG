/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** index_more
*/

#include "rpg.h"

void index_more_2(general_t *all, window_t *win)
{
    for (int a = 23; a != all->item->nbr_enemy; a++)
        if (all->index_map == 2) {
            RECT(win->win, all->item->lif[a], NULL);
            RECT(win->win, all->item->lif_go[a], NULL);
            RECT(win->win, all->item->lif_go2[a], NULL);
        }
}

void index_more_4(general_t *all, window_t *win)
{
    if (all->index_map == 4)
        for (int a = 12; a != all->item->nbr_enemy - 2; a++) {
            RECT(win->win, all->item->lif[a], NULL);
            RECT(win->win, all->item->lif_go[a], NULL);
            RECT(win->win, all->item->lif_go2[a], NULL);
        } else
            index_more_2(all, win);

}

void index_more(general_t *all, window_t *win)
{
    if (all->index_map == 3)
        for (int a = 5; a != 12; a++) {
            RECT(win->win, all->item->lif[a], NULL);
            RECT(win->win, all->item->lif_go[a], NULL);
            RECT(win->win, all->item->lif_go2[a], NULL);
        } else
            index_more_4(all, win);
}
