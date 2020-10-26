/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** simple description
*/

int  my_strncmp(char  const *s1 , char  const *s2, int lenght)
{
    int value_string_1 = 0;
    int value_string_2 = 0;

    if (lenght > my_strlen(s1) || lenght > my_strlen(s2) || lenght < 0){
        return 0;
    }
    for (int i = 0; i < (lenght - 1); i++){
        value_string_1 = s1[i];
        value_string_2 = s2[i];
        if ((value_string_1 - value_string_2)  != 0){
            return value_string_1 - value_string_2;
        }
    }
    return 0;
}

