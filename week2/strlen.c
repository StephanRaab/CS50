#include <cs50.h>
#include <stdio.h>

//this means main doesn't take any arguments
int main(void)
{
    string s = get_string();
    int n = 0;
    //backslash zero delineates the end of a string
    while(s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}