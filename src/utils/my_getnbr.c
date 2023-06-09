/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** true
*/

struct get {

    int result;
    int k;
    int a;
    int m;

};

void statt(struct get *nbr)
{
    nbr->result = 0;
    nbr->k = 0;
    nbr->a = 0;
    nbr->m = 0;
}

void second(struct get *nbr, char *str)
{
    while (str[nbr->a] == '-' || str[nbr->a] == '+') {
        if (str[nbr->a] == '-')
            nbr->m++;
        nbr->a++;
    }
}

int my_getnbr(char *str)
{
    struct get nbr;
    second(&nbr, str);
    statt(&nbr);
    while (str[nbr.a] != '\0') {
        while (str[nbr.a] <= '9' && str[nbr.a] >= '0') {
            nbr.result *= 10;
            nbr.result += str[nbr.a] - 48;
            nbr.a++;
            nbr.k++;
        }
        if (nbr.k > 0) break;
        nbr.a++;
        if (nbr.result >= 2147483647) return 0;
    }
    if (nbr.m % 2 != 0)
        nbr.result = -nbr.result;
    return nbr.result;
}
