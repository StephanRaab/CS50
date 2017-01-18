#include <stdio.h>
#include <cs50.h>

//argc = argument count \ argv = argument vector
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello %s\n", argv[1]);
    }
    else
    {
        printf("hello world\n");
    }
}