#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Enter a string: ");
    char *s = get_string();
    
    printf("\n");

    if (s == NULL) {
        return 1;
    }
    for (int i = 0, n = strlen(s); i < n; i++) {
        printf("%c\n", *(s+i));
    }
}