#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //1.5gal/min --> 192oz/min
    int time;
    
    do
    {
        printf("Minutes: ");
        time = get_int();
        int waterAmount = (time * (192/16));
        printf("Bottles: %i\n", waterAmount);
    }
    while(time < 0);
}