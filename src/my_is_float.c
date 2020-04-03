/*
** EPITECH PROJECT, 2020
** my_is_float.c
** File description:
** Returns 1 if the string can be converted into a float, 0 if not.
*/

#include "my.h"

int my_is_float(char *str, char end)
{
    int i = 0;

    if (!str)
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!(str[i]))
        return (0);
    for (; my_is_digit(str[i]) && str[i] != end; i++);
    if (str[i] != '.' || (str[i] == end && end == '.'))
        return (0);
    i++;
    if (!(str[i]))
        return (0);
    for (; my_is_digit(str[i]) && str[i] != end; i++);
    if (str[i] != end && str[i] != 0)
        return (0);
    return (1);
}