/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swaps two pointers
*/

void my_swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}



