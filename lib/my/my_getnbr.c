/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** simple description
*/

int my_getnbr(char const *str)
{
    int negative = 0;
    for (int j = 0; str[j] != '\0'; j++){
        if (str[j] == '-')
            negative++;
    }
    while ( (*str < '0' || *str > '9') && *str != '\0')
        str++;
    int convert, isNegative = 0;
    *str++;
    while (*str >= 48 && *str <= 57){
        int s = *str - '0';
        convert = convert*10 + (*str - 48);
        str++;
    }
    if (negative != 0)
        if ((negative % 2) == 1)
            isNegative = 1;
    if (isNegative == 1)
        convert *= -1;
    return convert;
}
