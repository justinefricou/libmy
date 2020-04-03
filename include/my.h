/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** lib my : header
*/

#ifndef DEF_MY
#define DEF_MY

#include <stdlib.h>
#include <unistd.h>

int my_is_digit(char c);
int my_is_int(char *str, char end);
int my_is_float(char *str, char end);

int my_strlen(char *str);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int nb);

void my_put_nbr(int nbr, int file_descr);
void my_put_str(char *str, int file_descr);
void my_print_word_array(char **array, char *separator, int file_descr);

int my_strcpy(char **dest, char *src);
int my_strncpy(char **dest, char *src, int nb);
int my_strcat(char **dest, char *str1, char *str2);
int my_strncat(char **dest, char *str1, char *str2, int nb);
void my_rev_str(char *str);

int my_get_nbr(char *str, char end);

#endif // DEF_MY