/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** simple description
*/

char *my_revstr(char *src)
{
    int max = my_strlen(src) - 1;
    int calc = 0;
    for (int i = 0; i < ((max + 1) / 2); i++) {
        char temp = src[i];
        calc = max - i;
        src[i] = src[calc];
        src[calc] = temp;
    }
    return src;
}
