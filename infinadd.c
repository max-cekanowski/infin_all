/*
** EPITECH PROJECT, 2020
** infinadd.c
** File description:
** add infinie
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

int longest(char *size1, char *size2)
{
    int nb1 = my_strlen(size1);
    int nb2 = my_strlen(size2);

    if (nb1 > nb2)
        return nb1;
    else
        return nb2;
}

char *infiniadd(char *size1, char *size2, int longest)
{
    int i;
    int nb1 = my_strlen(size1);
    int nb2 = my_strlen(size2);
    char *result = malloc(sizeof(char) * (nb1 + nb2 + 2));
    int v1;
    int v2;
    int carry = 0;
    int tmp;

    for (i = 1; i <= longest; i++) {
        v1 = size1[nb1 - i] - 48;
        v2 = size2[nb2 - i] - 48;
        if (i > nb1)
            v1 = 0;
        if (i > nb2)
            v2 = 0;
        tmp = (v1 + v2) + carry;
        if (tmp > 9){
            tmp = tmp - 10;
            carry = 1;
        }
        else
            carry = 0;
        result[longest - i] = (tmp + '0');
    }
    printf("%s", result);
    return (result);
}


char *main(int size, char **arg)
{
    int nb1 = my_strlen(arg[1]);
    int nb2 = my_strlen(arg[2]);
    char *result = malloc(sizeof(char) * (nb1 + nb2 + 2));
    
    result = infiniadd(arg[1], arg[2], longest(arg[1], arg[2]));
    return (result);
}
