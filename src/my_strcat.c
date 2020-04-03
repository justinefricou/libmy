/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** Concatenates two strings.
*/

#include "my.h"

int my_strcat(char **dest, char *str1, char *str2)
{
    int length1 = 0;
    int length2 = 0;

    length1 = my_strlen(str1);
    length2 = my_strlen(str2);
    *dest = malloc(sizeof(char) * (length1 + length2 + 1));
    if (*dest == NULL)
        return (84);
    for (int i = 0; i < length1; i++)
        (*dest)[i] = str1[i];
    for (int i = 0; i < length2; i++)
        (*dest)[i + length1] = str2[i];
    (*dest)[length1 + length2] = 0;
    return (0);
}