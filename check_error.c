/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** check_error
*/

#include "pushswap.h"

int check(int argc, char **argv)
{
    int a = 0;
    int i = 1;

    if (argc == 1) {
        return (84);
    }
    while (argc > 2 && i + 1 != argc) {
        if (my_getnbr(argv[i]) > my_getnbr(argv[i + 1])) {
            a = a + 1;
        }
        i = i + 1;
    }
    if (argc == 2 || a == 0) {
        return (0);
    } else {
        return (1);
    }
}