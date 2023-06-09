/*
** EPITECH PROJECT, 2022
** list.h
** File description:
** list
*/

#ifndef LIST_H
    #define LIST_H
    #include <stdlib.h>
    #include <unistd.h>

    typedef struct general_s general_t;
    typedef struct list_node_s {

        char *name;
        char *value;
        struct list_node_s *next;
        struct list_node_s *prev;
        sfText **text;
        int index;

    }  list_node_t;

    typedef struct list_s {

        list_node_t *head;
        list_node_t *tail;
        unsigned int size;
        bool check;
        sfText *title;
        unsigned int y;

    }list_t;

    void *my_calloc(size_t type, size_t size);
    void list_refresh(list_t *list);
    list_t *list_create(void);
    unsigned int list_add(list_t *list, int index);
    int list_get(list_t *list, unsigned int index);
    void *list_get_node(list_t *list, unsigned int index);
    void list_remove(list_t *list, unsigned int index);

#endif /* LIST_H */
