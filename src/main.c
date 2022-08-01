/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int rigor(int ac, char **av);

void pong(int ac, char **av);

int main(int ac, char **av)
{
    if (ac == 1)
        return 84;
    pong(ac, av);
    return (0);
}
