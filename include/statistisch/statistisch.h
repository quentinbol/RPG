/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** Statistish
*/

#ifndef Stat
    #define Stat

    #include "rpg.h"
    #define RECT sfRenderWindow_drawRectangleShape

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;
    typedef struct item_s{
        sfRectangleShape *lifebar;
        sfRectangleShape *lifebar_bor;
        sfRectangleShape **lif;
        sfRectangleShape **lif_go;
        sfRectangleShape **lif_go2;
        sfText *nbr_1;
        sfText *nbr_2;
        float hp_ninja;
        sfSprite *bordur;
        sfSprite *bordur_2;
        sfSprite *health_potion;
        sfSprite *damage_potion;
        int nbr_health_potion;
        int nbr_damage_potion;
        int serie_1;
        int serie_2;
        sfTexture *tex_1;
        sfTexture *tex_2;
        sfTexture *tex_bor1;
        sfTexture *tex_bor2;
        sfFont *font;
        sfVector2f *scale;
        sfVector2f *pos;
        float *hp_enemy;
        int nbr_enemy;
        int alo;
        sfVector2f *scale2;
        sfRectangleShape *lifebar_boss;
        sfRectangleShape *lifebar_boss2;
        sfVector2f scale_boss;
        int we_boss;
        sfText *boss;
        float hp_max_ninja;
        int **favor;
        int nbr_s1;
        int nbr_s2;
        float speeed;
        float damaje;
        int x;
        int nemy;
    }item_t;

    typedef struct satt_s{
        sfText *level;
        sfText *level2;
        sfText *nbr_point_text;
        sfText *healt;
        sfText *damage;
        sfText *speed;
        sfSprite *plac;
        sfSprite *heart;
        sfSprite *sword;
        sfSprite *booth;
        int nbr_point;
        int levelup;
        int healt_nbr;
        int damage_nbr;
        int speed_nbr;
        int ath_sat;
        char **str;
        sfText *level3;
        sfText *lekel;
        sfRectangleShape *expbar;
        sfRectangleShape *expbar_bor;
        float exp;
    }satt_t;

/*-------------STRUCTURE-------------*/

//ath.c
    void the_ath(general_t *all);
    void transf_1(general_t *all, char *str);
    void transf_2(general_t *all, char *str);
    void text_ath_1(general_t *all);
    void text_ath_2(general_t *all);

//boss_lifebar.c
    void boss_lifebar(general_t *all);
    void loop_boss(general_t *all);
    void name_boss(general_t *all);
    void init_boss_lifebar(general_t *all);

//display_stat.c
    void index_more_2(general_t *all, window_t *win);
    void index_more(general_t *all, window_t *win);
    void index_more_4(general_t *all, window_t *win);
    void display_sat(window_t *win, general_t *all);
    void display_ut(window_t *win, general_t *all);
    void display_hut(window_t *win, general_t *all);

//enemy_lifebar.c
    void chose(general_t *all, int i);
    void set_enemy_hp(general_t *all, int i, int a);
    void hit_enemy(general_t *all, int i);
    void loopy(general_t *all);
    void init_enemy_life(general_t *all, int nbr);

//event_item.c
    void event_potion_health(general_t *all);

//init_item.c
    void init_item(general_t *all);

//init_statistish.c
    void init_str(general_t *all);
    void init_level(general_t *all);
    void init_seven(general_t *all);
    void init_six(general_t *all);
    void init_five(general_t *all);

//item.c
    void loop_item(general_t *all);
    void use_item_s1(general_t *all);
    void use_item_s2(general_t *all);
    void health_potion(general_t *all);
    void damage_potion(general_t *all);

//satitich.c
    void exp_gest(general_t *all, float aie);
    void sat(general_t *all);
    void event_sat(general_t *all, window_t *win, int x, int y);
    void loopy_sat(general_t *all);
    void loop_sat(general_t *all);

//stat_destroy.c
    void destroy_statistisch(general_t *all);

//stat_main_character.c
    item_t *my_item_create(void);
    satt_t *my_satt_create(void);
    void init_height(general_t *all);
    void loop_lifebar(general_t *all);

#endif /* !Stat */
