/*
** EPITECH PROJECT, 2023
** quests.h
** File description:
** BY - CM
*/

#ifndef QUESTS_H_
    #define QUESTS_H_

    #include <stdio.h>
    #include "list.h"

    #define UINT unsigned int

    typedef struct general_s general_t;

/*---------------------------add_quest.c---------------------------*/

    /**
     * #include "quests.h"
     * @param list_t*
     * @param index index of the list has deleted
     * @return void
    */
    void delete_quests(list_t *quest, int index);
    /**
     * #include "quests.h"
     * @param list_t*
     * @param tab name of quest in tab[0] & description of quest in tab[1]
     * @param index number of quest: quest->size + 1
     * @return void
    */
    int add_quests(list_t *quest, char **tab, int index);
    list_node_t *my_quest_node_create(void);
    list_t *my_quest_create(void);
/*---------------------------add_quest.c---------------------------*/

/*---------------------------display_quest.c---------------------------*/
    sfText *get_text_title(void);
    sfText **get_text_quest(list_t *quest, list_node_t *node);
    void display_quest(window_t *win, list_t *quest, list_node_t *node);
/*---------------------------display_quest.c---------------------------*/

#endif /* !QUESTS_H_ */
