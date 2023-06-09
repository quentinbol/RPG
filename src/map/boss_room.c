/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** boss room
*/

#include "rpg.h"

static void change_pos_fire_bis(general_t *all)
{
    sfSprite_setPosition(FIRE2[19].sprite, (V){327, 334});
    sfSprite_setPosition(FIRE2[20].sprite, (V){720, 290});
    sfSprite_setPosition(FIRE2[21].sprite, (V){783, 195});
    sfSprite_setPosition(FIRE2[22].sprite, (V){1073, 290});
    sfSprite_setPosition(FIRE2[23].sprite, (V){1163, 195});
    sfSprite_setPosition(FIRE2[24].sprite, (V){1325, 290});
    sfSprite_setPosition(FIRE2[25].sprite, (V){1360, 195});
    sfSprite_setPosition(FIRE2[26].sprite, (V){390, 365});
    sfSprite_setPosition(FIRE2[27].sprite, (V){870, 365});
    sfSprite_setPosition(FIRE2[28].sprite, (V){562, 165});
}

static void change_pos_fire(general_t *all)
{
    sfSprite_setPosition(FIRE2[0].sprite, (V){134, 107});
    sfSprite_setPosition(FIRE2[1].sprite, (V){199 , 107});
    sfSprite_setPosition(FIRE2[2].sprite, (V){264, 107});
    sfSprite_setPosition(FIRE2[3].sprite, (V){326 , 107});
    sfSprite_setPosition(FIRE2[4].sprite, (V){165 , 140});
    sfSprite_setPosition(FIRE2[5].sprite, (V){295, 140});
    sfSprite_setPosition(FIRE2[6].sprite, (V){134, 168});
    sfSprite_setPosition(FIRE2[7].sprite, (V){199 , 168});
    sfSprite_setPosition(FIRE2[8].sprite, (V){264, 168});
    sfSprite_setPosition(FIRE2[9].sprite, (V){326 , 168});
    sfSprite_setPosition(FIRE2[10].sprite, (V){134, 267});
    sfSprite_setPosition(FIRE2[11].sprite, (V){199, 267});
    sfSprite_setPosition(FIRE2[12].sprite, (V){264, 267});
    sfSprite_setPosition(FIRE2[13].sprite, (V){326, 267});
    sfSprite_setPosition(FIRE2[14].sprite, (V){165, 300});
    sfSprite_setPosition(FIRE2[15].sprite, (V){295, 300});
    sfSprite_setPosition(FIRE2[16].sprite, (V){134, 334});
    sfSprite_setPosition(FIRE2[17].sprite, (V){199, 334});
    sfSprite_setPosition(FIRE2[18].sprite, (V){264, 334});
    change_pos_fire_bis(all);
}

static void change_pos_spike(general_t *all)
{
    sfSprite_setPosition(SPIKE[0].sprite, (V){405, 220});
    sfRectangleShape_setPosition(SPIKE[0].hitbox, (V){(415), (290)});
    sfSprite_setPosition(SPIKE[1].sprite, (V){405, 122});
    sfRectangleShape_setPosition(SPIKE[1].hitbox, (V){(415), (122 + 70)});
    sfSprite_setPosition(SPIKE[2].sprite, (V){600, 122});
    sfRectangleShape_setPosition(SPIKE[2].hitbox, (V){(610), (122 + 70)});
    sfSprite_setPosition(SPIKE[2].sprite, (V){560, 260});
    sfRectangleShape_setPosition(SPIKE[2].hitbox, (V){(570), (260 + 70)});
    sfSprite_setPosition(SPIKE[3].sprite, (V){595, 122});
    sfRectangleShape_setPosition(SPIKE[3].hitbox, (V){(605), (122 + 70)});
    sfSprite_setPosition(SPIKE[4].sprite, (V){880, 122});
    sfRectangleShape_setPosition(SPIKE[4].hitbox, (V){(890), (122 + 70)});
    sfSprite_setPosition(SPIKE[5].sprite, (V){1230, 260});
    sfRectangleShape_setPosition(SPIKE[5].hitbox, (V){(1240), (260 + 70)});
    sfSprite_setPosition(SPIKE[6].sprite, (V){1460, 260});
    sfRectangleShape_setPosition(SPIKE[6].hitbox, (V){(1470), (260 + 70)});
}

void boss_room_handling(general_t *all)
{
    change_pos_fire(all);
    change_pos_spike(all);
    sfSprite_setPosition(FIRE[2].sprite, (V){405, 460});
    sfRectangleShape_setPosition(FIRE[2].hitbox, (V){(405 + 30), (460 + 20)});
    sfSprite_setPosition(FIRE[0].sprite, (V){905, 460});
    sfRectangleShape_setPosition(FIRE[0].hitbox, (V){(905 + 30), (460 + 20)});
    for (int i = 7; i != 11; i++) {
        sfSprite_setPosition(SPIKE[i].sprite, (V){10000, 10000});
        sfRectangleShape_setPosition(SPIKE[i].hitbox, (V){10000, 10000});
    }
}
