/*
** EPITECH PROJECT, 2020
** tests_my_is_float
** File description:
** Unit tests for function my_is_float
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_is_float, normal_case)
{
    cr_expect_eq(my_is_float("0.0", ' '), 1);
    cr_expect_eq(my_is_float("0.0 0", ' '), 1);
    cr_expect_eq(my_is_float(".050", 0), 1);
    cr_expect_eq(my_is_float("45.1 456", ' '), 1);
    cr_expect_eq(my_is_float("-0.0", ' '), 1);
    cr_expect_eq(my_is_float("-00.000", ' '), 1);
    cr_expect_eq(my_is_float("-0.0-1", '-'), 1);
    cr_expect_eq(my_is_float("-0014.56", ' '), 1);
    cr_expect_eq(my_is_float("-756.3/15", '/'), 1);
    cr_expect_eq(my_is_float("+0.0", ' '), 1);
    cr_expect_eq(my_is_float("+00.00", ' '), 1);
    cr_expect_eq(my_is_float("+001.03202", ' '), 1);
}

Test(my_is_float, int_case)
{
    cr_expect_eq(my_is_float("00", ' '), 0);
    cr_expect_eq(my_is_float("001", '/'), 0);
    cr_expect_eq(my_is_float("001003", '3'), 0);
    cr_expect_eq(my_is_float("00145.6", '.'), 0);
    cr_expect_eq(my_is_float("756315", ' '), 0);
    cr_expect_eq(my_is_float("-00", ' '), 0);
    cr_expect_eq(my_is_float("-001", 'm'), 0);
    cr_expect_eq(my_is_float("-001003", ' '), 0);
    cr_expect_eq(my_is_float("-00145.6", '5'), 0);
    cr_expect_eq(my_is_float("-756315", ' '), 0);
    cr_expect_eq(my_is_float("+0.0", '.'), 0);
    cr_expect_eq(my_is_float("+001", ' '), 0);
    cr_expect_eq(my_is_float("+001003", ' '), 0);
    cr_expect_eq(my_is_float("+001456", ' '), 0);
    cr_expect_eq(my_is_float("+756315", ' '), 0);
}

Test(my_is_float, too_much_signs)
{
    cr_expect_eq(my_is_float("++0.0", 0), 0);
    cr_expect_eq(my_is_float("++00.0002", 0), 0);
    cr_expect_eq(my_is_float("++00145.6", 0), 0);
    cr_expect_eq(my_is_float("++756315", 0), 0);
    cr_expect_eq(my_is_float("--0.0", 0), 0);
    cr_expect_eq(my_is_float("--00.0005", 0), 0);
    cr_expect_eq(my_is_float("--0014.56", 0), 0);
    cr_expect_eq(my_is_float("--75.6315", 0), 0);
    cr_expect_eq(my_is_float("+-0.0", 0), 0);
    cr_expect_eq(my_is_float("-+00.0006", 0), 0);
    cr_expect_eq(my_is_float("-+00145.6", 0), 0);
    cr_expect_eq(my_is_float("+-756.315", 0), 0);
}

Test(my_is_float, wrong_characters_case)
{
    cr_expect_eq(my_is_float("+", 0), 0);
    cr_expect_eq(my_is_float("a.0", 0), 0);
    cr_expect_eq(my_is_float("0.a", 0), 0);
    cr_expect_eq(my_is_float("0014a5.6a2", 0), 0);
    cr_expect_eq(my_is_float("7563.15f", 0), 0);
    cr_expect_eq(my_is_float("0.", 0), 0);
    cr_expect_eq(my_is_float("-a0", 0), 0);
    cr_expect_eq(my_is_float("-001+456", 0), 0);
    cr_expect_eq(my_is_float("-756.315+", 0), 0);
    cr_expect_eq(my_is_float("+45.1-", 0), 0);
    cr_expect_eq(my_is_float("+0.0+", 0), 0);
    cr_expect_eq(my_is_float("+001.", 0), 0);
    cr_expect_eq(my_is_float("+0014. 56", 0), 0);
    cr_expect_eq(my_is_float("+75631.2.5", 0), 0);
}

Test(my_is_float, empty_or_null_string_case)
{
    char empty_str[1] = {0};
    char *null_str = NULL;

    cr_expect_eq(my_is_float(empty_str, 0), 0);
    cr_expect_eq(my_is_float(null_str, 0), 0);
}