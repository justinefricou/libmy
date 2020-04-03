/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** Returns the number of characters in the string passed as parameter.
*/

#include "my.h"

int my_strlen(char *str)
{
    int length = 0;

    for (; str[length]; length++);
    return (length);
}