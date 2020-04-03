/*
** EPITECH PROJECT, 2020
** my_rev_str.c
** File description:
** Reverses a string
*/

#include "my.h"

void my_rev_str(char *str)
{
    int length = 0;
    char c = ' ';

    length = my_strlen(str);
    for (int index = 0; index < length / 2; index++) {
        c = str[index];
        str[index] = str[length - index - 1];
        str[length - index - 1] = c;
    }
}
