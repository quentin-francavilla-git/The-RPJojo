/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** 
*/

#include "lib.h"

void my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
}
