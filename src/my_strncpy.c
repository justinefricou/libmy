/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** A function that copies n characters from a string into another
*/

#include "my.h"

int my_strncpy(char **dest, char *src, int nb)
{
    int length = 0;

    length = my_strlen(src);
    length = (length < nb) ? length : nb;
    *dest = malloc(sizeof(char) * (length + 1));
    if (*dest == NULL)
        return (84);
    for (int i = 0; i < length; i++)
        (*dest)[i] = src[i];
    (*dest)[length] = 0;
    return (0);
}