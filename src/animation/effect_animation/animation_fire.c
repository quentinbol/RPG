/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** animation of fire
*/

#include "rpg.h"

void check_animation_done(general_t *all, sfClock *clock,
            bool *animation_finished, int i)
{
    FIRE[i].rect.left = 900;
    if (!(*animation_finished)) {
        sfClock_restart(clock);
        *animation_finished = true;
    } else {
        if (all->seconds >= 2.0) {
            FIRE[i].rect.left = 0;
            FIRE[i].rect.top = 15;
            *animation_finished = false;
            FIRE[i].take_fire_dmg = true;
        } else {
            FIRE[i].take_fire_dmg = false;
        }
    }
}

void continue_animation(general_t *all, sfClock *clock, int i)
{
    if (all->seconds >= 0.1) {
        if (FIRE[i].rect.left > 350) {
            FIRE[i].rect.top += 170;
            FIRE[i].rect.left = 0;
        } else
                FIRE[i].rect.left += 95;
            sfClock_restart(clock);
        }
        sfSprite_setTextureRect(FIRE[i].sprite, FIRE[i].rect);
}

void animation_fire(general_t *all)
{
    static bool animation_finished = false;
    sfClock* clock = FIRE[0].clock;
    sfTime time = sfClock_getElapsedTime(clock);
    all->seconds = sfTime_asSeconds(time);

    for (int i = 0; i != 5; i++) {
        FIRE[i].rect.width = 110;
        FIRE[i].rect.height = 110;
        if (FIRE[i].rect.left > 370 && FIRE[i].rect.top > 300) {
            check_animation_done(all, clock, &animation_finished, i);
        } else
            continue_animation(all, clock, i);
    }
}

void if_end_go_start(general_t *all, sfClock *clock, int i)
{
    if (FIRE2[i].rect.left > 600) {
        FIRE2[i].rect.left = 55;
    } else
        FIRE2[i].rect.left += 95;
    sfClock_restart(clock);
}

void animation_fire_2(general_t *all)
{
    sfClock* clock = FIRE2[0].clock;
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = sfTime_asSeconds(time);
    for (int i = 0; i != 32; i++) {
        if (seconds > 0.1) {
            if_end_go_start(all, clock, i);
        }
        sfSprite_setTextureRect(FIRE2[i].sprite, FIRE2[i].rect);
    }
}
