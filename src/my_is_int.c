/*
** EPITECH PROJECT, 2020
** my_is_int.c
** File description:
** Returns 1 if the string can be converted into an int, 0 if not.
*/

#include "my.h"

int my_is_int(char *str, char end)
{
    int i = 0;

    if (!str || !(*str))
        return (0);
    if (str[i] == '-' || str[i] == '+') {
        i++;
        if (!(str[i]))
            return (0);
    }
    for (; str[i] != end && str[i] != 0; i++) {
        if (str[i] < '0' || '9' < str[i])
            return (0);
    }
    return (1);
}