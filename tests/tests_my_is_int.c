/*
** EPITECH PROJECT, 2020
** test_my_is_int
** File description:
** Unit tests for function my_is_int
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_is_int, normal_case)
{
    cr_expect_eq(my_is_int("0", ' '), 1);
    cr_expect_eq(my_is_int("0 0", ' '), 1);
    cr_expect_eq(my_is_int("00", 0), 1);
    cr_expect_eq(my_is_int("001 456", ' '), 1);
    cr_expect_eq(my_is_int("75.6315", '.'), 1);
    cr_expect_eq(my_is_int("-0", ' '), 1);
    cr_expect_eq(my_is_int("-00", ' '), 1);
    cr_expect_eq(my_is_int("-00-1", '-'), 1);
    cr_expect_eq(my_is_int("-001456", ' '), 1);
    cr_expect_eq(my_is_int("-7563/15", '/'), 1);
    cr_expect_eq(my_is_int("+0", ' '), 1);
    cr_expect_eq(my_is_int("+00", ' '), 1);
    cr_expect_eq(my_is_int("+001", ' '), 1);
    cr_expect_eq(my_is_int("+001456", '4'), 1);
    cr_expect_eq(my_is_int("+756315", ' '), 1);
}

Test(my_is_int, float_case)
{
    cr_expect_eq(my_is_int("0.0", ' '), 0);
    cr_expect_eq(my_is_int("00.1", '/'), 0);
    cr_expect_eq(my_is_int("001.003", '3'), 0);
    cr_expect_eq(my_is_int(".001456", ' '), 0);
    cr_expect_eq(my_is_int("756.315", ' '), 0);
    cr_expect_eq(my_is_int("-0.0", ' '), 0);
    cr_expect_eq(my_is_int("-00.1", 'm'), 0);
    cr_expect_eq(my_is_int("-001.003", ' '), 0);
    cr_expect_eq(my_is_int("-.001456", ' '), 0);
    cr_expect_eq(my_is_int("-756.315", ' '), 0);
    cr_expect_eq(my_is_int("+0.0", ' '), 0);
    cr_expect_eq(my_is_int("+00.1", ' '), 0);
    cr_expect_eq(my_is_int("+001.003", ' '), 0);
    cr_expect_eq(my_is_int("+.001456", ' '), 0);
    cr_expect_eq(my_is_int("+756.315", ' '), 0);
}

Test(my_is_int, too_much_signs)
{
    cr_expect_eq(my_is_int("++0", 0), 0);
    cr_expect_eq(my_is_int("++00", 0), 0);
    cr_expect_eq(my_is_int("++001", 0), 0);
    cr_expect_eq(my_is_int("++001456", 0), 0);
    cr_expect_eq(my_is_int("++756315", 0), 0);
    cr_expect_eq(my_is_int("--0", 0), 0);
    cr_expect_eq(my_is_int("--00", 0), 0);
    cr_expect_eq(my_is_int("--001", 0), 0);
    cr_expect_eq(my_is_int("--001456", 0), 0);
    cr_expect_eq(my_is_int("--756315", 0), 0);
    cr_expect_eq(my_is_int("+-0", 0), 0);
    cr_expect_eq(my_is_int("-+00", 0), 0);
    cr_expect_eq(my_is_int("+-001", 0), 0);
    cr_expect_eq(my_is_int("-+001456", 0), 0);
    cr_expect_eq(my_is_int("+-756315", 0), 0);
}

Test(my_is_int, wrong_characters_case)
{
    cr_expect_eq(my_is_int("+", 0), 0);
    cr_expect_eq(my_is_int("a0", 0), 0);
    cr_expect_eq(my_is_int("0a", 0), 0);
    cr_expect_eq(my_is_int("0014a56", 0), 0);
    cr_expect_eq(my_is_int("756315f", 0), 0);
    cr_expect_eq(my_is_int("-a", 0), 0);
    cr_expect_eq(my_is_int("-0a", 0), 0);
    cr_expect_eq(my_is_int("-a0", 0), 0);
    cr_expect_eq(my_is_int("-001+456", 0), 0);
    cr_expect_eq(my_is_int("-756315+", 0), 0);
    cr_expect_eq(my_is_int("+0-", 0), 0);
    cr_expect_eq(my_is_int("+00+", 0), 0);
    cr_expect_eq(my_is_int("+001.", 0), 0);
    cr_expect_eq(my_is_int("+0014 56", 0), 0);
    cr_expect_eq(my_is_int("+75631  5", 0), 0);
}

Test(my_is_int, empty_or_null_string_case)
{
    char empty_str[1] = {0};
    char *null_str = NULL;

    cr_expect_eq(my_is_int(empty_str, 0), 0);
    cr_expect_eq(my_is_int(null_str, 0), 0);
}