/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** simple description
*/

char transform(char c);

char *my_strcapitalize(char *str)
{
    int l = my_strlen(str);
    for (int i = 0; i < l; i++) {
        if (str[i] == ' ' || (str[i] >= 40 && str[i] <= 46))
            str[i+1] = transform(str[i+1]);
        else if (i == 0)
            str[i] = transform(str[i]);
    }
    return str;
}

char transform(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}


