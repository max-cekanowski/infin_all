/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** simple description
*/

int  my_strcmp(char  const *s1 , char  const *s2)
{
    int value_string_1 = 0;
    int value_string_2 = 0;
    int max = my_strlen(s1) > my_strlen(s2) ? my_strlen(s1) : my_strlen(s2);
    for (int i = 0; i < max; i++){
        value_string_1 = s1[i];
        value_string_2 = s2[i];
        if ((value_string_1 - value_string_2) != 0){
            return value_string_1 - value_string_2;
        }
    }
    return 0;
}

