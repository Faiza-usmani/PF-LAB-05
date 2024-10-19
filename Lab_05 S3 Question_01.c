#include <stdio.h>

int main()
{
    int num1, num2, x;

    printf("Enter first number:\t");
    scanf("%d", &num1);
    printf("Enter second number:\t");
    scanf("%d", &num2);

    x = (num1 > num2) ? num1 : num2;
    printf("The greatest of two numbers is %d", x);

    return 0;
}