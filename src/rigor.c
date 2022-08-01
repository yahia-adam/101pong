/*
** EPITECH PROJECT, 2021
** rigor.c
** File description:
** gestion d'error
*/

#include <stdlib.h>
#include <stdio.h>

int rigor(int ac, char **av)
{
    int z = 0;

    if (ac < 8)
        return (84);
    if (ac > 8)
        return (84);
    for (int  i = 0; av[7][i] != '\0'; i++) {
        if (av[7][i] == '.')
            z++;
    }
    if ((atof(av[6]) - atof(av[3])) == 0)
        return (84);
    if ( z == 1)
        return (84);
    if (av[7][0] == '-')
        return (84);
    return (0);
}
