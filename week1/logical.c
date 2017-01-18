#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();
    if (c == 'y' || c == 'Y')
    {
        printf("you said yes\n");
    }
    else if ( c == 'n' || c == 'N')
    {
        printf("you said no\n");
    }
    else
    {
        printf("error\n");
    }
}