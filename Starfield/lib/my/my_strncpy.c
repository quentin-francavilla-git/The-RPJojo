/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** 
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
