#include <cs50.h>
#include <stdio.h>

int main (void) {
    printf("Name: ");
    string name = get_string();
    printf("Hello, %s.\nNice to meet you!\n", name);
}