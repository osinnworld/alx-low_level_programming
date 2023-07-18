#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
    int start = 1, end = 1023, sum1 = 0, num1;

    if (start % 3 == 0 || start % 5 == 0)
    {
        start++;
    }

    for (num1 = start; num1 <= end; num1 += 1)
    {
        sum1 += num1;
    }

    printf("The sum of natural numbers between 1-1023 is: %d", sum1);

    return 0;
}
