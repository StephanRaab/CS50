#include <stdio.h>
#include <cs50.h>
#include <string.h>

//argc = argument count \ argv = argument vector
int main(int argc, string argv[])
{
    //iterate over strings in argv
    for(int i = 0; i < argc; i++) 
    {
        //iterate over characters in current string
        for(int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            //print j'th character in i'th string
            printf("%c\n", argv[i][j]);
        }
    }
}