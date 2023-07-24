#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: The input array.
 * @n: The number of elements to print.
 * Return: void.
 */
void print_array(int *a, int n)
{
    int inc;

    for (inc = 0; inc < n; inc++)
    {
        if (inc != n - 1)
        {
            printf("%d, ", a[inc]);
        }
        else
        {
            printf("%d", a[inc]);
        }
    }

    printf("\n");
}
