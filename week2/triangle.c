#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    printf("Side 1: ");
    int x = GetInt();
    
    printf("Side 2: ");
    int y = GetInt();
    
    printf("Side 3: ");
    int z = GetInt();
    
    bool triangle = valid_triangle(x, y, z);
    
    printf("The result is %d \n", triangle);
}

    bool valid_triangle(float a, float b, float c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            return false;
        }
        
        if ( (a + b <= c) || (a + c <= b) || (b + c <= a))
        {
            return false;
        }
        
        else
        {
            return true;
        }
    }