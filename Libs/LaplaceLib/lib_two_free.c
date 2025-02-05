/*
** EPITECH PROJECT, 2023
** Title: Laplace Lib Library v1.0.0
** Author: MasterLaplace
** Created: 2023-10-13
** File description:
** lib_two_free
*/

#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

inline void laplace_lib_free(char **to_free) { free(*to_free); }

inline void laplace_lib_two_free(char **tab)
{
    if (!tab)
        return;
    for (unsigned i = 0; tab[i]; free(tab[i]), ++i);
    free(tab);
    tab = NULL;
}
