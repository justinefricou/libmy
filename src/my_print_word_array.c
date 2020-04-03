/*
** EPITECH PROJECT, 2020
** my_print_word_array.c
** File description:
** Prints an array of words with a given separator (a string)
*/

#include "my.h"

void my_print_word_array(char **array, char *separator, int file_descr)
{
    int nbr_of_str = 0;

    for (; array[nbr_of_str]; nbr_of_str++);
    for (int index = 0; index < nbr_of_str; index++) {
        my_put_str(array[index], file_descr);
        if (index < nbr_of_str - 1)
            my_put_str(separator, file_descr);
    }
}