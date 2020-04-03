/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Prints a number passed as argument
*/

#include "my.h"

void my_put_nbr(int nbr, int file_descr)
{
    char character = 0;

    if (nbr < 0) {
        write(file_descr, "-", 1);
        nbr = nbr * -1;
    }
    if (nbr >= 10)
        my_put_nbr(nbr / 10, file_descr);
    character = nbr % 10 + 48;
    write(file_descr, &character, 1);
}