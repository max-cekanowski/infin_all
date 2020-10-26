/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** simple description
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int primaryNumberIsFind = 0;

    while (primaryNumberIsFind == 0){
        nb++;
        if (my_is_prime(nb) == 1)
            primaryNumberIsFind = 1;
    }
    return nb;
}

