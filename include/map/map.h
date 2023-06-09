/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-yann.perennes
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>

/*-------------DEFINE-------------*/
    #define TG "assets/maps/map_de_gauche.png"
    #define TH "assets/maps/map_du_haut.png"
    #define TD "assets/maps/map_de_droite.png"
    #define TM "assets/maps/map_de_base.png"

    #define VERT (sfColor) {\
    39, 255, 0, 0\
    }
    #define PURPLE (sfColor) {\
    255, 0, 220, 0\
    }
    #define ROUGE (sfColor) {\
    255, 0, 49, 0\
    }
    #define JAUNE (sfColor) {\
    216, 255, 0, 0\
    }
    #define BLEU (sfColor) {\
    0, 22, 255, 0\
    }
    #define TURQUOISE (sfColor) {\
    124, 253, 191, 0\
    }
/*-------------DEFINE-------------*/

/*-------------STRUCTURE-------------*/
    typedef struct general_s general_t;

    typedef struct ymage_map_s {

        char *pathame_image;
        char *pathname_texture;
        sfColor couleur;
        sfVector2f new_pose;

    } ymage_map_t;

    typedef struct map_s {

        sfTexture *texture_map;
        sfImage *image_map;
        sfSprite *sprite_map;

    } map_t;
/*-------------STRUCTURE-------------*/

//bigggest_room.c
    void biggest_room_handling(general_t *all);

//boss_room.c
    void boss_room_handling(general_t *all);

//main_room.c
    void main_room_handling(general_t *all);

//upper_room.c
    void upper_room_handling(general_t *all);

//which_map.c
    void check_which_map(general_t *all, int i);

map_t my_map_create(void);
int my_map_destroy(map_t *carte);
#endif /* !MAP_H_ */
