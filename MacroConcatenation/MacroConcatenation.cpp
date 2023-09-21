// MacroFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
