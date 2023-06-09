/*
** EPITECH PROJECT, 2023
** utils.h
** File description:
** BY - CM
*/

#ifndef UTILS_H_
    #define UTILS_H_

    typedef struct general_s general_t;

//cm_strdup.c
    char *cm_strdup(char const *src);

//cm_strlen.c
    unsigned int cm_strlen(char const *str);

//my_calloc.c
    void *my_calloc(size_t type, size_t size);

//my_get_origin.c
    void get_origin(general_t *all, sfVector2f pos_sprite, int i);

//my_get_sprite.c
    sfSprite *my_get_sprite_animation(char *filepath);
    sfSprite *my_get_sprite(char *filepath, sfVector2f pos, sfVector2f scale);

//my_get_text.c
    sfText *my_get_text(char *content, sfVector2f pos, sfVector2f scale);

//my_getnbr.c
    struct get;
    void statt(struct get *nbr);
    void second(struct get *nbr, char *str);
    int my_getnbr(char *str);

//my_operation_vector.c
    sfVector2f sfvectorf_subtract(sfVector2f vector1, sfVector2f vector2);
    sfVector2f sfvectorf_normalize(sfVector2f vector);
    sfVector2f sfvectorf_multiply(sfVector2f vector, float scalar);
    sfVector2f sfvectorf_add(sfVector2f vector1, sfVector2f vector2);
    float sfvectorf_length(sfVector2f vector);

#endif /* !HITBOX_H_ */
