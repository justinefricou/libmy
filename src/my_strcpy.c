/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** A function that copies a string into another
*/

#include "my.h"

int my_strcpy(char **dest, char *src)
{
    int length = 0;

    length = my_strlen(src);
    *dest = malloc(sizeof(char) * (length + 1));
    if (*dest == NULL)
        return (84);
    for (int i = 0; i < length; i++)
        (*dest)[i] = src[i];
    (*dest)[length] = 0;
    return (0);
}