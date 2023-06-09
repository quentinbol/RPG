/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** mouvement header
*/

#ifndef mouv
    #define mouv

/*---------------STRUCTURE-----------*/
    typedef struct general_s general_t;
    typedef struct map_s map_t;

    typedef struct movement_s {

        float dx;
        float dy;
        sfVector2f enemie_pos;
        sfClock *clock_time;
        sfTime time_enemy;
        sfClock *stop_time;
        sfTime stop_enemy_time;
        sfVector2f new_direction;

    } movement_t;

/*---------------DEFINE--------------*/
    /*---------------CLOCK-----------------*/
    #define clock_ all->anima->clock_create
    #define micro clock_[1].time.microseconds
    #define MILLI_TO_SEC micro / 1000000.0;
    /*------------------STATE------------------*/
    #define DEAD all->anima[0].state->is_dead
    #define ATTACK all->anima[0].state->is_attacking
    #define RUN all->anima[0].state->is_running
    #define RUN_REVERSE all->anima[0].state->is_running_back
    #define CURRENTLY_ATTACKING all->anima[0].state->is_currently_attacking
    #define TAKE_DAMAGE all->anima[0].state->is_taking_damage
    #define TAKE_DAMAGE_BIG all->anima[0].state->is_taking_big_damage
    #define TAKE_DAMAGE_SLOW all->anima[0].state->is_taking_slow_damage
    #define TAKE_DAMAGE_SPIKE all->anima[0].state->is_taking_damage_spike
    #define MAX_ENEMY_COUNT 10
    /*---------------CHARACTERS-----------------------*/
    #define ENEMY all->anima
    #define NINJA all->anima
    #define PNJ all->anima
/*---------------DEFINE--------------*/

//algo_movement_enemy.c
void change_direction(general_t *all, int i);
void enemy_random_mov(general_t *all, int i, int state, map_t *carte);
void enemy_is_thinking(general_t *all, int i, int state);
void choose_random_path(general_t *all, int i, int state);
void update_enemy_mov(general_t *all, int i, int state);
void take_other_direction(general_t *all, int i, int state);

//enemy_pause.c
    void enemy_pause(general_t *all, int i);

//ia_movement_pause.c
    void ia_enemy(general_t *all, int i, int id_clock, int state);

//mouvement_enemy_display.c
    void enemy_border(general_t *all, int i, map_t *map);

//mouvement_ninja_display.c
    void change_map2(general_t *all, map_t *map, sfSprite *sprite, int i);
void change_map(general_t *all, sfColor couleur, map_t *map, sfSprite *sprite);
    void mouvement_character(general_t *all, map_t *map);
    void player_border(general_t *all);

#endif /* !mouv */
