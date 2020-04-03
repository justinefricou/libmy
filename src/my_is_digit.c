/*
** EPITECH PROJECT, 2020
** my_is_digit.c
** File description:
** Returns 1 if the character passed as argument is a digit, 0 if not.
*/

#include "my.h"

int my_is_digit(char c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}