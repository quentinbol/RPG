/*
** EPITECH PROJECT, 2023
** obj
** File description:
** true
*/

#ifndef obj
    #define obj
    #include "rpg.h"

    typedef struct obj_s{
        sfSprite *exp_potion;
        sfSprite *speed_potion;
        sfSprite *guerison;
        sfSprite *fouet;
        sfSprite *glu;
        sfSprite *stun;
        sfSprite *gold;
        sfSprite *coal;
        sfSprite *keyy;
        float spid;
        int gluant;
        int cagelux;
        int fouette;
        sfSprite *ko;
        int **anal;
        int trou;
    }obj_t;

    obj_t *my_obj_create(void);
    void drop_to_inv(general_t *all, int serie, int nbr);
    void rage_event(general_t *all);
    void init_all_obj(general_t *all);
    void loop_obj(general_t *all);
    void exp_potion(general_t *all);
    void display_obj(window_t *win, general_t *all);
    void event_potion_exp(general_t *all);
    void speed_potion(general_t *all);
    void event_potion_speed(general_t *all);
    void guerison(general_t *all);
    void event_potion_guerison(general_t *all);
    int tou(general_t *all, int serie);
    void fouet(general_t *all);
    void glu(general_t *all);
    void stun(general_t *all);
    void event_fouet(general_t *all);
    void event_glu(general_t *all);
    void event_stun(general_t *all);
    void gold(general_t *all);
    void coal(general_t *all);
    void kei(general_t *all);
    void anal_profonde(general_t *all);

#endif /* !obj */
