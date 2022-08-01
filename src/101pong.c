/*
** EPITECH PROJECT, 2021
** 101pong.c
** File description:
** 101pong.c
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int rigor(int ac, char **av);

void usage(void)
{
    printf("USAGE\n");
    printf("    ./101pong x0 y0 z0 x1 y1 z1 n\n");
    printf("DESCRIPTION\n");
    printf("    x0 ball abscissa at time t -1\n");
    printf("    y0 ball abscissa at time t -1\n");
    printf("    z0 ball abscissa at time t -1\n");
    printf("    x1 ball abscissa at time t\n");
    printf("    y1 ball ordinate at time t\n");
    printf("    z1 ball altitude at time t\n");
    printf("    n time shift (greater than or equal to zero, integer)\n");
}

void velocity(char **av)
{
    float vx = 0;
    float vy = 0;
    float vz = 0;

    vx = (atof(av[4]) - atof(av[1]));
    vy = (atof(av[5]) - atof(av[2]));
    vz = (atof(av[6]) - atof(av[3]));
    printf("The velocity vector of the ball is:\n");
    printf("(%1.2f, %1.2f, %1.2f)\n", vx, vy, vz);
}

void ball_coordinates(char **av)
{
    float vx = 0;
    float vy = 0;
    float vz = 0;

    vx = ((atof(av[4]) - atof(av[1])) * atof(av[7]) + atof(av[4]));
    vy = ((atof(av[5]) - atof(av[2])) * atof(av[7]) + atof(av[5]));
    vz = ((atof(av[6]) - atof(av[3])) * atof(av[7]) + atof(av[6]));
    printf("At time t + %s, ball coordinates will be:\n", av[7]);
    printf("(%1.2f, %1.2f, %1.2f)\n", vx, vy, vz);
}

void incident_angle(char **av)
{
    float teta = 0;
    float len_v = 0;
    float vx = 0;
    float vy = 0;
    float vz = 0;

    vx = (atof(av[4]) - atof(av[1]));
    vy = (atof(av[5]) - atof(av[2]));
    vz = (atof(av[6]) - atof(av[3]));
    len_v = sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2));
    printf("%s\n", "The incidence angle is:");
    teta = asin((vz / len_v));
    teta = (180 / M_PI) * teta;
    teta = fabs(teta);
    printf("%1.2f degrees\n", teta);
}

void pong(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return;
    }
    if (rigor(ac, av) == 84) {
        rigor(ac, av);
        return;
    }
    velocity(av);
    ball_coordinates(av);
    incident_angle(av);
}
