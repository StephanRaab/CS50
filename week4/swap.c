#include <stdio.h>
#include <cs50.h>

void swap (int *a, int *b);

int main (void)
{
    printf("Enter first integer: ");
    int x = get_int();
    
    printf("Enter second integer: ");
    int y = get_int();
    
    printf("\n");
    
    printf("first integer was %i\n", x);
    printf("second integer was %i\n", y);
    
    printf("\n");
    
    printf("Swapping integers...\n");
    swap(&x, &y);
    
    printf("\n");
    printf("First integer is now --> %i\n", x);
    printf("Second integer is now --> %i\n", y);
}

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}