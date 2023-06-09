/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** mouvement of player
*/

#include "rpg.h"
#include "map/map.h"

static const ymage_map_t PATHNAME[] = {
    {"assets/maps/map_de_droite_WRP.png", TD, VERT, {200, 500}}, //vert
    {"assets/maps/map_du_haut_WRP.png", TH, JAUNE, {870, 800}}, //jaune
    {"assets/maps/map_de_gauche_WRPT.png", TG, BLEU, {100, 1020}}, //bleu
    {"assets/maps/map_de_base_WRGBY.png", TM, PURPLE, {130, 920}}, // purple
    {NULL, NULL, ROUGE, {0, 0}}
};


void change_map2(general_t *all, map_t *map, sfSprite *sprite, int i)
{
    if (map->image_map) {
        sfImage_destroy(map->image_map);
        map->image_map = NULL;
        map->image_map = sfImage_createFromFile(PATHNAME[i].pathame_image);
    }
    if (map->texture_map) {
        sfTexture_destroy(map->texture_map);
        map->texture_map = NULL;
        map->texture_map =
            sfTexture_createFromFile(PATHNAME[i].pathname_texture, 0);
        sfSprite_setTexture(map->sprite_map, map->texture_map, sfTrue);
    }
    sfSprite_setPosition(sprite, PATHNAME[i].new_pose);
}

void change_map(general_t *all, sfColor couleur, map_t *map, sfSprite *sprite)
{
    int b = 0;
    for (int a = 0; a != 20; a++) {
        if (all->inv->nbr_item[a][1] == 10)
            b = 1;
    }
    if (couleur.r == PATHNAME[0].couleur.r &&
        couleur.g == PATHNAME[0].couleur.g &&
        couleur.b == PATHNAME[0].couleur.b && b == 1) {
        change_map2(all, map, all->anima[0].sprite->chara, 0);
        check_which_map(all, 0);
        }
    for (int i = 1; PATHNAME[i].pathame_image;i++) {
        if (couleur.r == PATHNAME[i].couleur.r &&
            couleur.g == PATHNAME[i].couleur.g &&
            couleur.b == PATHNAME[i].couleur.b) {
            change_map2(all, map, all->anima[0].sprite->chara, i);
            check_which_map(all, i);
        }
    }
}

void mouvement_character(general_t *all, map_t *map)
{
    sfVector2f pose = (sfVector2f){0, 0};
    sfColor couleur = sfBlack;
    sfColor couleur_now = sfBlack;

    clock_[1].time = sfClock_restart(clock_[1].clock_item);
    float dt = sfTime_asSeconds(all->anima->clock_create[1].time);
    pose = sfSprite_getPosition(all->anima[0].sprite->chara);
    couleur_now = sfImage_getPixel(map->image_map, pose.x, pose.y);
    pose.x += all->anima[0].move->dx * dt;
    pose.y += all->anima[0].move->dy * dt;
    couleur = sfImage_getPixel(map->image_map, pose.x, pose.y);
    if (couleur.r != ROUGE.r || couleur.g != ROUGE.g ||
        couleur.b != ROUGE.b)
        sfSprite_move(all->anima[0].sprite->chara,
            (V) {all->anima[0].move->dx * dt, all->anima[0].move->dy * dt});
    else
        change_map(all, couleur_now, map, all->anima[0].sprite->chara);
}

void player_border(general_t *all)
{
    if (NINJA[0].ajustement.x < 0)
        NINJA[0].ajustement.x = 0;
    if (NINJA[0].ajustement.y < 0)
        NINJA[0].ajustement.y = 0;
    if (NINJA[0].ajustement.x > 1920 - 20)
        NINJA[0].ajustement.x = 1920 - 20;
    if (NINJA[0].ajustement.y > 1080 - 50)
        NINJA[0].ajustement.y = 1080 - 50;
    sfSprite_setPosition(NINJA[0].sprite->chara, all->anima[0].ajustement);
}
