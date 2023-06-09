/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** mouvement of enemy
*/

#include "rpg.h"

static sfVector2f velocity[MAX_ENEMY_COUNT] = { {0.0f, 0.0f} };

static const ymage_map_t PATHNAME[] = {
    {"assets/maps/map_de_droite_WRP.png", TD, VERT, {500, 540}}, //vert
    {"assets/maps/map_du_haut_WRP.png", TH, JAUNE, {900, 540}}, //jaune
    {"assets/maps/map_de_gauche_WRPT.png", TG, BLEU, {280, 1020}}, //bleu
    {"assets/maps/map_de_base_WRGBY.png", TM, PURPLE, {960, 540}}, // purple
    {NULL, NULL, ROUGE, {0, 0}}
};

void enemy_border(general_t *all, int i, map_t *map)
{
    sfVector2f pose = (sfVector2f){0, 0};
    sfColor couleur = sfBlack;
    sfColor couleur_now = sfBlack;

    couleur = sfImage_getPixel(map->image_map,
            ENEMY[i].move->enemie_pos.x, ENEMY[i].move->enemie_pos.y);
    if (couleur.r != ROUGE.r ||
        couleur.g != ROUGE.g ||
        couleur.b != ROUGE.b) {
        ENEMY[i].state->walk = true;
    } else
        ENEMY[i].state->walk = false;
    if (ENEMY[i].move->enemie_pos.x < 30)
        ENEMY[i].move->enemie_pos.x = 30;
    if (ENEMY[i].move->enemie_pos.y < 30)
        ENEMY[i].move->enemie_pos.y = 30;
    if (ENEMY[i].move->enemie_pos.x > 1800 - 20)
        ENEMY[i].move->enemie_pos.x = 1800 - 20;
    if (ENEMY[i].move->enemie_pos.y > 950 - 50)
        ENEMY[i].move->enemie_pos.y = 950 - 50;
}
