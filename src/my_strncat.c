/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** Concatenates n chars of the 2nd string to the end of the 1st string.
*/

#include "my.h"

int my_strncat(char **dest, char *str1, char *str2, int nb)
{
    int length1 = 0;
    int length2 = 0;

    if (nb < 0)
        return (-1);
    length1 = my_strlen(str1);
    length2 = my_strlen(str2);
    length2 = (length2 < nb) ? length2 : nb;
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