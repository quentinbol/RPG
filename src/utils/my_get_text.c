/*
** EPITECH PROJECT, 2023
** my_get_text.c
** File description:
** to create a sfText
*/

#include "rpg.h"

sfText *my_get_text(char *content, sfVector2f pos, sfVector2f scale)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("assets/Font/font.ttf");

    if (font == NULL)
        return NULL;
    sfText_setFont(text, font);
    sfText_setString(text, content);
    sfText_setPosition(text, pos);
    sfText_setScale(text, scale);
    return text;
}
