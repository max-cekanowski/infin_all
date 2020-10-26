/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** simple description
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    if (n <= 0 || n > my_strlen(src)){
        dest[0] = '\0';
        return dest;
    }
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    return dest;
}
