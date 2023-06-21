#include <stdio.h>

int main(void)
{
    unsigned long fib1 = 1;  /* First Fibonacci number */
    unsigned long fib2 = 2;  /* Second Fibonacci number */
    unsigned long fib3;      /* Variable to store the next Fibonacci number */
    int count;

    printf("%lu, %lu", fib1, fib2);  /* Print the first two Fibonacci numbers */

    for (count = 3; count <= 50; count++)
    {
        fib3 = fib1 + fib2;
        printf(", %lu", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}

