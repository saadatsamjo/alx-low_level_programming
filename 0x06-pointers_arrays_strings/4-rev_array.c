#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: the  array.
 * @n: number of elements of the array.
 * Return: no return.
 */


void reverse_array(int *a, int n) {
    int temp;
    int i, j;

    for (i = 0, j = n - 1; i < j; i++, j--) {
        // Swap elements at positions i and j
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
