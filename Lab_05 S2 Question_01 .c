#include <stdio.h>

/*Write a program that checks if a number is divisible by both 3 and 5 using logical operators.
*/

int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Number is divisible by both 3 and 5");
    }
    else
        printf("Number is not divisible by both 3 and 5");

    return 0;
}
