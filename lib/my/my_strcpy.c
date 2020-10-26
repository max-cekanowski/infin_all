/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (*dest != '\0'){
        dest[i] = '\0';
        i++;
    }
    i = 0;
    while (*src != '\0'){
        dest[i] = src[0];
        i++;
        *src++;
    }
    return dest;
}
