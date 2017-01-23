//http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare

#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;
    free(x);//opposite of malloc, this frees the memory!!!
}

int main(void)
{
    f();
    return 0;
}

//valgrind ./memory (current program name)
//run valgrind --leak-check=ful ./memory --> to see full details of leaked memory