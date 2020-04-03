/*
** EPITECH PROJECT, 2020
** my_put_str.c
** File description:
** Prints a string passed as parameter
*/

#include "my.h"

void my_put_str(char *str, int file_descr)
{
    int length_str = 0;

    for (; str[length_str]; length_str++);
    write(file_descr, str, length_str);
}