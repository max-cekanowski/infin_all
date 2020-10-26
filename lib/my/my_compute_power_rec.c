/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** simple description
*/

int my_compute_power_rec(int nb, int pow)
{
    if (pow <= 1)
        return nb;
    my_compute_power_rec(nb * nb, pow - 1);
}
