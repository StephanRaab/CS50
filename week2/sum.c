#include <stdio.h>
#include <cs50.h>

int add_two_ints(int a, int b);

int main(void)
{
    printf("Enter an integer: ");
    int x = GetInt();
    
    printf("Enter another integer: ");
    int y = GetInt();
    
    int z = add_two_ints(x, y );
    
    printf("%i + %i = %i\n", x, y, z);
}

    int add_two_ints(int a, int b)
    {
        int sum = a + b;
        return sum;
    }