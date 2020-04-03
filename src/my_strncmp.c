/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** Reproduces the behavior of the strncmp function.
*/

#include "my.h"

int my_strncmp(char *str1, char *str2, int nb)
{
    int i = 0;

    for (; str1[i] != 0 && str2[i] != 0 && i < nb; i++) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }
    if (i >= nb)
        return (0);
    return (str1[i] - str2[i]);
}