/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** Compares two strings and returns their difference (as an int).
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    for (; str1[i] != 0 && str2[i] != 0; i++) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }
    return (str1[i] - str2[i]);
}