#include <stdio.h>

/**
 * main - entry to the program
 * Return: 0
*/
int fibonacci(void);

int main(void)
{
    unsigned long int fib = fibonacci();
    printf("%li", fib);
    return (0);
}


int fibonacci(void)
{
int count = 0;
unsigned long first = 1;
unsigned long second = 2;
unsigned long next;
next = first + second;
printf("%lu, ", first);
printf("%lu, ", second);
printf("%lu, ", next);
while (count < 50)
{

    first = second;
    second = next;
    next = first + second;
    if (count < 50 )
    {
        printf("%lu, ", next);
    }
    else
    {
        printf("%lu, ", next);
    }
    count++;
}
    return (0);
}