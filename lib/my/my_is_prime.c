/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** simple description
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int diviser = 2; diviser <= (nb / 2); diviser++)
    {
        if ((nb % diviser) == 0)
            return 0;
    }
    return 1;
}
