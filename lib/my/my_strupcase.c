/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** simple description
*/

char *my_strupcase(char *str)
{
    int l = my_strlen(str);

    for (int i = 0; i < (l); i++){
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] = str[i] - 32;
    }
    return str;
}


