/*
** EPITECH PROJECT, 2023
** Title: Laplace Lib Library v1.0.0
** Author: MasterLaplace
** Created: 2023-10-13
** File description:
** lib_stwa_test
*/

#include <criterion/criterion.h>

#ifdef __cplusplus
    #include <cstring>
    #include <cstdlib>
#else
    #include <string.h>
    #include <stdlib.h>
#endif

char **laplace_lib_stwa(char *str, const char *delim);

Test(laplace_lib_stwa_01, should_return_array_of_strings)
{
    char *str = "Hello World";
    char *delim = " ";
    char **expected = malloc(sizeof(char *) * 3);
    expected[0] = "Hello";
    expected[1] = "World";
    expected[2] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_str_eq(actual[1], expected[1]);
    cr_assert_eq(actual[2], expected[2]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_02, should_return_array_of_strings)
{
    char *str = "Hello \tWorld";
    char *delim = " \t";
    char **expected = malloc(sizeof(char *) * 3);
    expected[0] = "Hello";
    expected[1] = "World";
    expected[2] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_str_eq(actual[1], expected[1]);
    cr_assert_eq(actual[2], expected[2]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_03, should_return_array_of_strings)
{
    char *str = "Hello World";
    char *delim = " \t";
    char **expected = malloc(sizeof(char *) * 3);
    expected[0] = "Hello";
    expected[1] = "World";
    expected[2] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_str_eq(actual[1], expected[1]);
    cr_assert_eq(actual[2], expected[2]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_04, should_return_array_of_strings)
{
    char *str = "\tHello\t World  ";
    char *delim = " \t";
    char **expected = malloc(sizeof(char *) * 3);
    expected[0] = "Hello";
    expected[1] = "World";
    expected[2] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_str_eq(actual[1], expected[1]);
    cr_assert_eq(actual[2], expected[2]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_05, should_return_array_of_strings)
{
    char *str = "HelloWorld";
    char *delim = " \t";
    char **expected = malloc(sizeof(char *) * 2);
    expected[0] = "HelloWorld";
    expected[1] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_eq(actual[1], expected[1]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_06, should_return_array_of_strings)
{
    char *str = "HelloWorld";
    char *delim = "";
    char **expected = malloc(sizeof(char *) * 2);
    expected[0] = "HelloWorld";
    expected[1] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_eq(actual[1], expected[1]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_07, should_return_array_of_strings)
{
    char *str = "HelloWorld";
    char *delim = "HelloWorld";
    char **expected = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_eq(actual, expected);
}

Test(laplace_lib_stwa_08, should_return_array_of_strings)
{
    char *str = "HelloWorld";
    char *delim = "Hello";
    char **expected = malloc(sizeof(char *) * 4);
    expected[0] = "W";
    expected[1] = "r";
    expected[2] = "d";
    expected[3] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_str_eq(actual[1], expected[1]);
    cr_assert_str_eq(actual[2], expected[2]);
    cr_assert_eq(actual[3], expected[3]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_09, should_return_array_of_strings)
{
    char *str = "HelloWorld";
    char *delim = "World";
    char **expected = malloc(sizeof(char *) * 2);
    expected[0] = "He";
    expected[1] = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_str_eq(actual[0], expected[0]);
    cr_assert_eq(actual[1], expected[1]);
    for (unsigned i = 0; actual[i]; i++) { free(actual[i]); }
    free(actual);
    free(expected);
}

Test(laplace_lib_stwa_10, should_return_array_of_strings)
{
    char *str = "";
    char *delim = "Hello";
    char **expected = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_eq(actual, expected);
}

Test(laplace_lib_stwa_11, should_return_array_of_strings)
{
    char *str = NULL;
    char *delim = "";
    char **expected = NULL;

    char **actual = laplace_lib_stwa(str, delim);
    cr_assert_eq(actual, expected);
}
