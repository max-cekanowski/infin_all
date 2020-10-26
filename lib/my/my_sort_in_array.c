/*
** EPITECH PROJECT, 2020
** my_sort_in_array
** File description:
** simple description
*/

void my_sort_in_array(int *array, int size)
{
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            if (array[j] < array[i]){
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}
