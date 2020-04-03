/*
** EPITECH PROJECT, 2020
** my_get_nbr.c
** File description:
** Converts a string into an int and returns it.
*/

#include "my.h"

int my_get_nbr(char *str, char end)
{
    int nbr = 0;
    int i = 0;

    for (; str[i] == '-' || str[i] == '+' || str[i] == '0'; i++);
    for (; str[i] != end && str[i] != 0; i++)
        nbr = nbr * 10 + (str[i] - 48);
    if (str[0] == '-')
        nbr = nbr * (-1);
    return (nbr);
}