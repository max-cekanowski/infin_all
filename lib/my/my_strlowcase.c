/*
** EPITECH PROJECT, 2020
** my_strlowercase
** File description:
** simple description
*/

char *my_strlowercase(char *str)
{
    int l = my_strlen(str);
    for (int i = 0; i < (l); i++){
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
    }
    return str;
}


