/*
** EPITECH PROJECT, 2023
** my_window_create.c
** File description:
** to initialise the structure all->window
*/

#include "rpg.h"

static int my_set_sprite_menu_2(menu_t *menu)
{
    sfIntRect rect1 = {244, 110, 35, 35};
    sfIntRect rect2 = {210, 110, 35, 35};

    sfSprite_setTextureRect(menu->sfxoff, rect1);
    sfSprite_setTextureRect(menu->sfxon, rect2);
    sfSprite_setOrigin(menu->sfxon, (V){18, 18});
    sfSprite_setOrigin(menu->sfxoff, (V){18, 18});
    sfSprite_setOrigin(menu->how_to_play, (V){150, 55});
    sfText_setOrigin(menu->button_text, (V){25, 25});
    return 0;
}

static int my_set_sprite_menu(menu_t *menu)
{
    sfIntRect rect1 = {244, 110, 35, 35};
    sfIntRect rect2 = {210, 110, 35, 35};
    sfIntRect rect3 = {209, 147, 35, 35};
    sfIntRect rect4 = {278, 147, 35, 35};
    sfIntRect rect5 = {278, 182, 35, 35};

    sfSprite_setScale(menu->case_no, (sfVector2f){2, 2});
    sfSprite_setTextureRect(menu->case_no, rect1);
    sfSprite_setOrigin(menu->case_no, (V){18, 18});
    sfSprite_setScale(menu->case_yes, (sfVector2f){2, 2});
    sfSprite_setTextureRect(menu->case_yes, rect2);
    sfSprite_setOrigin(menu->case_yes, (V){18, 18});
    sfSprite_setTextureRect(menu->volume, rect3);
    sfSprite_setOrigin(menu->volume, (V){18, 18});
    sfSprite_setTextureRect(menu->volume_up, rect4);
    sfSprite_setOrigin(menu->volume_up, (V){18, 18});
    sfSprite_setTextureRect(menu->volume_down, rect5);
    sfSprite_setOrigin(menu->volume_down, (V){18, 18});
    return my_set_sprite_menu_2(menu);
}

static int my_init_menu_buttons2(menu_t *menu)
{
    char *file = "assets/Menu/buttons.png";
    sfVector2f scale = {2, 2};
    sfSprite *sprite1 = my_get_sprite(file, (V){1050, 530}, scale);
    sfSprite *sprite2 = my_get_sprite(file, (V){1200, 490}, scale);
    sfSprite *sprite3 = my_get_sprite(file, (V){1200, 580}, scale);
    sfText *text = my_get_text("Music volume", (V){595, 500}, scale);
    sfText *text2 = my_get_text("SFX", (V){600, 680}, scale);
    sfSprite *sprite4 = my_get_sprite(file, (V){1050, 720}, scale);
    sfSprite *sprite5 = my_get_sprite(file, (V){1050, 720}, scale);
    sfText *title = my_get_text("Little Dungeon", (V){850, 50}, scale);

    menu->volume = sprite1;
    menu->volume_up = sprite2;
    menu->volume_down = sprite3;
    menu->volume_text = text;
    menu->sfx_name = text2;
    menu->sfxon = sprite4;
    menu->sfxoff = sprite5;
    menu->title = title;
    return 0;
}

static int my_init_menu_buttons(menu_t *menu)
{
    sfVector2f scale = {2, 2};
    char *file = "assets/Menu/buttons.png";
    sfText *text1 = my_get_text("PLAY", (V){650, 400}, scale);
    sfText *text2 = my_get_text("RESUME", (V){650, 600}, scale);
    sfText *text3 = my_get_text("SETTINGS", (V){1020, 400}, scale);
    sfText *text4 = my_get_text("QUIT GAME", (V) {1020, 600}, scale);
    sfText *text5 = my_get_text("Full screen\n mode", (V){600, 300}, scale);
    sfSprite *sprite1 = my_get_sprite(file, (V){1050, 325}, (V){2, 2});
    sfSprite *sprite2 = my_get_sprite(file, (V){1050, 325}, (V){2, 2});

    menu->start_the_game = text1;
    menu->resume_game = text2;
    menu->settings = text3;
    menu->quit = text4;
    menu->fullscreen = text5;
    menu->case_no = sprite1;
    menu->case_yes = sprite2;
    my_init_menu_buttons2(menu);
    return my_set_sprite_menu(menu);
}

window_t *my_window_create(void)
{
    window_t *win = my_calloc(sizeof(window_t), 1);
    char *file = "assets/Menu/background.jpg";
    sfVector2f pos = {200, 80};
    sfVector2f pos2 = {150, 85};
    sfVector2f scale = {0.8, 0.8};
    sfVector2f scale2 = {1.2, 1.2};

    win->win = my_create_window();
    win->index = 0;
    win->clock = sfClock_create();
    win->time = sfClock_getElapsedTime(win->clock);
    win->menu = my_calloc(sizeof(menu_t), 1);
    win->menu->background = my_get_sprite(file, (V){0, 0}, (V){1, 1});
    win->menu->menu_song = sfMusic_createFromFile("assets/Menu/music.ogg");
    win->menu->loud = 100.0;
    win->menu->how_to_play = my_get_sprite("assets/Menu/tuto.png", pos, scale);
    win->menu->button_text = my_get_text("How to play", pos2, scale2);
    sfSprite_setScale(win->menu->background, (sfVector2f){4.5, 4});
    my_init_menu_buttons(win->menu);
    return win;
}
