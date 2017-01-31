#include <cs50.h>
#include <stdio.h>

void hash(int n);
void space(int n);
void hashAmount(string s, int n);
void spaceAmount(string s, int n);

int main (void)
{
    printf("Height: ");
    int height;
    
    do
    {
        height = get_int();
        //int j = 2;
        for (int i = 1; i < height + 1; i++){
            space(height - i);
            hash(i + 1);
            //j++;
            printf("\n");
        }
    }
    while(height < 0 || height > 23);
}

void hash(int n)
{
    hashAmount("#", n);
}

void space(int n)
{
    spaceAmount(" ", n);
}

void spaceAmount(string s, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s", s);
    }
}

void hashAmount(string s, int n )
{
    for(int i = 0; i < n; i++)
    {
        printf("%s", s);
    }
}