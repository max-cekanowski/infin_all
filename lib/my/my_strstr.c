/*
** EPITECH PROJECT, 2020
** my_strstrr
** File description:
** simple description
*/

char *my_strstr(char *str , char  const *to_find)
{
    int max = my_strlen(str) - 1;
    int j = 0;

    for (int i = 0; i < max; i++){
        if (str[i] == to_find[j]){
            if (j == (my_strlen(j) - 1))
                return str[i - j];
            j++;
        }
        else
            j = 0;
    }
    return '\0';
}

