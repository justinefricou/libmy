/*
** EPITECH PROJECT, 2020
** tests_my_is_digit
** File description:
** Unit tests for function my_is_digit
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_is_digit, normal_case)
{
    cr_expect_eq(my_is_digit('0'), 1);
    cr_expect_eq(my_is_digit('1'), 1);
    cr_expect_eq(my_is_digit('2'), 1);
    cr_expect_eq(my_is_digit('3'), 1);
    cr_expect_eq(my_is_digit('4'), 1);
    cr_expect_eq(my_is_digit('5'), 1);
    cr_expect_eq(my_is_digit('6'), 1);
    cr_expect_eq(my_is_digit('7'), 1);
    cr_expect_eq(my_is_digit('8'), 1);
    cr_expect_eq(my_is_digit('9'), 1);
}

Test(my_is_digit, int_value_case)
{
    cr_expect_eq(my_is_digit(0), 0);
    cr_expect_eq(my_is_digit(1), 0);
    cr_expect_eq(my_is_digit(2), 0);
    cr_expect_eq(my_is_digit(3), 0);
    cr_expect_eq(my_is_digit(4), 0);
    cr_expect_eq(my_is_digit(5), 0);
    cr_expect_eq(my_is_digit(6), 0);
    cr_expect_eq(my_is_digit(7), 0);
    cr_expect_eq(my_is_digit(8), 0);
    cr_expect_eq(my_is_digit(9), 0);
}

Test(my_is_digit, bounds_case)
{
    cr_expect_eq(my_is_digit('0' - 1), 0);
    cr_expect_eq(my_is_digit('9' + 1), 0);
}