/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** simple description
*/

int my_compute_square_root(int nb)
{
    int nombre = 0;
    int i = 0;

    if (nb < 0)
        nb = nb * -1;
    while (nombre < nb)
    {
        i++;
        nombre = i * i;
    }
    if (nombre == nb)
        return i;
    else
        return 0;
}
