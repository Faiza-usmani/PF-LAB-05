#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num % 2 == 0)
            printf("The number is poistive and even");
        else
            printf("The number is positive and odd");
    }
    else
        printf("Number is negative");

    return 0;
}