/*
** EPITECH PROJECT, 2023
** hitbox.h
** File description:
** BY - CM
*/

#ifndef HITBOX_H_
    #define HITBOX_H_

    typedef struct general_s general_t;

//change_items_orientations.c
    void if_sup_not_agro(general_t *all, int i, float size);
    void if_sup_agro(general_t *all, int i, float size);
    void if_inf_not_agro(general_t *all, int i, float size);
    void change_orientation_items(general_t *all);

//collisions_handling.c
    void second_part_main_room(general_t *all, map_t *carte, int *a);
    void first_part_main_room(general_t *all, map_t *carte, int *a);
    void fight_part_boss_room(general_t *all, map_t *carte, int *a);
    void first_part_third_room(general_t *all, map_t *carte, int *a);
    void first_part_second_room(general_t *all, map_t *carte, int *a);
    bool check_collision_rect(sfRectangleShape* hitbox_ele,
                        sfRectangleShape* hitbox);
    bool check_collision(sfCircleShape* circle, sfRectangleShape* hitbox);
    void check_colision_elements(general_t *all);
void check_different_collision(general_t *all, int i, int state, map_t *carte);
    void collision_handling(general_t *all, map_t *carte);

//create_hitbox.c
    sfCircleShape *create_agro_hitbox(general_t *all, sfCircleShape *agro_hitbox
                                , sfVector2f pos, float size);
sfCircleShape *create_attack_range(general_t *all, sfCircleShape *attack_range
                                , sfVector2f pos, float size);
    sfRectangleShape *create_hitbox(general_t *all, sfRectangleShape *hitbox,
                                    sfVector2f pos, sfVector2f size);

//hitbox.c
    void change_elements_in_map(general_t *all);

//init_hitbox.c
    void init_attack_range(general_t *all);
    void init_hitbox(general_t *all);
    void init_agro_hitbox(general_t *all);
    void hitbox_handle(general_t *all);

#endif /* !HITBOX_H_ */
