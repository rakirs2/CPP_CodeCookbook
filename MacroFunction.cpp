#define SUM(X, Y, Z) X + Y + Z
#define FOO1 (1) 
#define FOO2 (2)
#include <cstdio>

void print(int a, int b)
{
    printf("Sum: %d", a + b);
}

int main(void)
{
    // Normal function works as expected
    print(FOO1, FOO2);

    int a = 3;
    printf("\nMacro Sum: %d", SUM(FOO1, FOO2, a));

    return 0;
}