/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** animation header [structure - define - prototype]
*/

#ifndef anim
    #define anim
    #include "mouvement/mouvement.h"

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;

    typedef struct sound_effect_s {

        sfMusic *sound_music;
        sfSoundBuffer *buffer;
        sfSound *sound_effect;

    } sound_effect_t;

    typedef struct clock_s {

        sfClock *clock_item;
        float seconds;
        sfTime time;

    } clock_struct;

    typedef struct fight_s {

        sfRectangleShape *hitbox;
        sfCircleShape *agro_hitbox;
        sfCircleShape *attack_range;
        float time_since_last_random_move;
        float time_since_stopped;
        float stop_time;
        int i;

    } fight_t;

    typedef struct sprite_s {

        sfSprite *chara;
        sfTexture *texture_chara;
        sfIntRect rect;
        sfVector2f size;
        sfVector2f pos;

    } sprite_t;

    typedef struct state_s {

        bool restart;
        bool is_running;
        bool is_running_back;
        bool is_attacking;
        bool is_dead;
        bool is_currently_attacking;
        bool is_taking_damage;
        bool is_taking_big_damage;
        bool is_taking_slow_damage;
        bool is_taking_damage_spike;
        bool talk_to_you;
        bool spawn;
        bool walk;

    } state_t;

    typedef struct effect_spike_s {

        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect rect;
        sfTime time;
        sfClock *clock;
        float seconds;
        sfRectangleShape *hitbox;
        sfVector2f pos;

    } effect_spike_t;

    typedef struct effect_fire2_s {

        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect rect;
        sfTime time;
        sfClock *clock;
        float seconds;
        sfVector2f pos;

    } effect_fire2_t;

    typedef struct effect_fire_s {

        sfSprite *sprite;
        sfTexture *texture;
        sfIntRect rect;
        sfTime time;
        sfClock *clock;
        float seconds;
        sfRectangleShape *hitbox;
        sfVector2f pos;
        bool take_fire_dmg;
        bool inflict_damage;

    } effect_fire_t;

    typedef struct animation_effect_s {

        effect_fire2_t *fire_2;
        effect_fire_t *fire;
        effect_spike_t *spike;

    } animation_effect_t;

    typedef struct animation_s {

        sfRectangleShape *shape;
        int i;
        sfVector2f origin;
        sfVector2f ajustement;
        int number_of_frame;
        state_t *state;
        movement_t *move;
        clock_struct *clock_create;
        sound_effect_t *sound;
        fight_t *fight;
        sprite_t *sprite;
        char **quest;
        int is_valid;
        bool start_fight;

    } animation_t;
/*-------------STRUCTURE-------------*/

/*---------------DEFINE--------------*/
    #define FIRE2 all->effect->fire_2
    #define FIRE all->effect->fire
    #define SPIKE all->effect->spike
    #define SOUND all->anima->sound
    #define IS_CURRENT_ATTACKING NINJA[0].state->is_currently_attacking == true
    #define IS_DEAD all->anima[0].state->is_dead == true
    #define IS_RUNNING_BACK all->anima[0].state->is_running_back == true
    #define IS_RUNNING all->anima[0].state->is_running == true
    #define IS_ATTACKING all->anima[0].state->is_attacking == true
    #define V sfVector2f
    #define Ninja "assets/charaters/ninja/Ninja.png"
    #define Viking "assets/charaters/viking/Viking.png"
    #define Golem "assets/charaters/golem/golem.png"
    #define Giant "assets/charaters/giant/giant.png"
    #define Pnj "assets/charaters/pnj/pnj.png"
    #define Fire "assets/effect_animation/fire/fire.png"
    #define Fire2 "assets/effect_animation/fire/fire_2.png"
    #define Spikes "assets/effect_animation/spikes/spike.png"
    #define DrawCircle sfRenderWindow_drawCircleShape
    #define DrawRect sfRenderWindow_drawRectangleShape
    #define __AGRO_HITBOX check_collision(ENEMY[i].fight->agro_hitbox,\
    NINJA[0].fight->hitbox)
    #define __ATTACK_HITBOX check_collision(ENEMY[i].fight->attack_range,\
    NINJA[0].fight->hitbox)

    void check_animation_done(general_t *all, sfClock *clock,
            bool *animation_finished, int i);
    void continue_animation(general_t *all, sfClock *clock, int i);
    void animation_fire(general_t *all);
    void if_end_go_start(general_t *all, sfClock *clock, int i);
    void animation_fire_2(general_t *all);

//create_effect.c
    effect_fire_t *create_fire(general_t *all, int i, V pos);
    effect_spike_t *create_spike(general_t *all, int i, V pos);
    effect_fire2_t *create_fire_2(general_t *all, int i, V pos);

//effect.c
    void animation_spike(general_t *all, int i);
    void make_animation_effect(general_t *all);

//init_effect.c
    void fourth_display(general_t *all);
    void first_display(general_t *all);
    void init_create_fire_2(general_t *all);
    void init_effect_fire_2(general_t *all);
    void init_effect_fire(general_t *all);
    void init_effect_spike(general_t *all);

//init_rect_effect.c
    sfIntRect init_fire2_rect(sfIntRect rect);
    sfIntRect init_fire_rect(sfIntRect rect);
    sfIntRect init_spike_rect(sfIntRect rect);
        /*---------------EFFECT_ANIMATION--------------*/

        /*---------------SOUND_EFFECT--------------*/
//create_sound.c
    void init_sound_effect(general_t *all);
        /*---------------SOUND_EFFECT--------------*/

        /*---------------STATE_ANIMATION--------------*/
//state_enemy_animation.c
    void animation_enemy_not_moving(general_t *all, int i, int id_clock);
    void animation_enemy_moving(general_t *all, int i, int id_clock);
    void animation_enemy_attacking(general_t *all, int i, int id_clock);
    void animation_enemy_dead(general_t *all, int i, int id_clock);

//state_giant_animation.c
    void animation_giant_not_moving(general_t *all, int i, int id_clock);
    void animation_giant_attacking(general_t *all, int i, int id_clock);
    void animation_giant_moving(general_t *all, int i, int id_clock);
    void animation_giant_death(general_t *all, int i, int id_clock);

//state_golem_animation.c
    void animation_golem_not_moving(general_t *all, int i, int id_clock);
    void animation_golem_moving(general_t *all, int i, int id_clock);
    void animation_golem_attacking(general_t *all, int i, int id_clock);
    void animation_golem_dead(general_t *all, int i, int id_clock);

//state_ninja_animation.c
    void animation_ninja_not_moving(general_t *all);
    void animation_ninja_attacking(general_t *all);
    void animation_ninja_running(general_t *all);
    void animation_ninja_dead(general_t *all);
    void ninja_currently_attacking(general_t *all);

//state_pnj_animation.c
    void animation_pnj_not_moving(general_t *all, int i, int id_clock);
        /*---------------STATE_ANIMATION--------------*/

//animation_bis.c
    void make_animation_pnj(general_t *all, int i, int id_clock);
    void make_animation_golem(general_t *all, int i, int id_clock);
    void make_animation_giant(general_t *all, int i, int id_clock);
    void make_animation_enemy(general_t *all, int i, int id_clock);
    void make_animation_ninja(general_t *all);

//animation.c
    void make_all(general_t *all);

//create_enemy_bis.c
    void create_enemy_struct(general_t *all, int i);
    sfIntRect init_enemy_rect(sfIntRect rect);
    sfIntRect init_golem_rect(sfIntRect rect);
    sfIntRect init_giant_rect(sfIntRect rect);
    sfIntRect init_pnj_rect(sfIntRect rect);

//create_enemy.c
    animation_t *create_enemy(general_t *all, V size, V pos, int i);
    animation_t *create_golem(general_t *all, V size, V pos, int i);
    animation_t *create_giant(general_t *all, V size, V pos, int i);

//create_ninja.c
    void create_ninja(general_t *all);
    animation_t *create_pnj(general_t *all, sfVector2f size,
                            sfVector2f pos, int i);

//init_set_sprite_anim.c
    void malloc_structure(__attribute__ ((unused)) general_t *all);
    void init_sprite_structure(general_t *all);
    void init_rect(general_t *all);

//set_origin.c
    void set_origin_to_character_golem(general_t *all, int i);
    void set_origin_to_character_enemy(general_t *all, int i);
    void set_origin_to_character_giant(general_t *all, int i);
    void set_origin_to_character_ninja(general_t *all);

#endif /* !anim */
