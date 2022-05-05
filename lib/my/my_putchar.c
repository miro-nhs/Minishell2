/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** put char passed in param
*/

#include "my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
