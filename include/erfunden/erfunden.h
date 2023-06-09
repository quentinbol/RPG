/*
** EPITECH PROJECT, 2023
** erfunden
** File description:
** proto
*/

#ifndef Erfunden
    #define Erfunden

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;

    typedef struct inv_s {

        sfSprite *erfunden;
        sfSprite **plaky;
        sfRectangleShape **cell;
        int **nbr_item;
        int boulo;
        int walacpamoi;
        sfText **usy;
        sfText *nbr_1;
        sfText *nbr_2;
        sfSprite *tex_bor1;
        sfSprite *tex_bor2;
        sfText **nbr_cell;
        char **str_cell;

    } inv_t;
/*-------------STRUCTURE-------------*/

//init_erfunden.c
    void init_inv_a(general_t *all);

//loop_erfuden.c
    void loopy_0(general_t *all);
    void loopy_84(general_t *all);
    void loopy_erf_one(general_t *all);

//start_main_erfunden.c
    inv_t *my_inv_create(void);
    void alitem(general_t *all, int x, int y);
    void ivent(general_t *all);

#endif /* !Erfunden */
