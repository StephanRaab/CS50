#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   //characters use single quotes in C
   for(char c = 'A'; c <= 'Z'; c++)
   {
      printf("%c is %i\n", c, c);
   }
}