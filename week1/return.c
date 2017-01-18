#include <cs50.h>
#include <stdio.h>

int square(int n);

int main (void)
{
    printf("The value of x is: ");
    int x = get_int();
    printf("x^2 = %i\n", square(x));
}

int square(int n)
{
    return n * n;
}