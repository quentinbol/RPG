/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** operation vector
*/

#include "rpg.h"

sfVector2f sfvectorf_subtract(sfVector2f vector1, sfVector2f vector2)
{
    sfVector2f result;

    result.x = vector1.x - vector2.x;
    result.y = vector1.y - vector2.y;
    return result;
}

sfVector2f sfvectorf_normalize(sfVector2f vector)
{
    float magnitude = sqrt(vector.x * vector.x + vector.y * vector.y);

    if (magnitude != 0) {
        vector.x /= magnitude;
        vector.y /= magnitude;
    }
    return vector;
}

sfVector2f sfvectorf_multiply(sfVector2f vector, float scalar)
{
    vector.x *= scalar;
    vector.y *= scalar;
    return vector;
}

sfVector2f sfvectorf_add(sfVector2f vector1, sfVector2f vector2)
{
    sfVector2f result;

    result.x = vector1.x + vector2.x;
    result.y = vector1.y + vector2.y;
    return result;
}

float sfvectorf_length(sfVector2f vector)
{
    return sqrtf(vector.x * vector.x + vector.y * vector.y);
}
