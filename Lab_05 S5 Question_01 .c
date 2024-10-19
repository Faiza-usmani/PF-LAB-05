#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year to check:\t");
    scanf("%d", &yr);

    if (yr % 4 == 0)
    {
        printf("Year is a leap year");
    }
    else
        printf("Year is not a leap year");

    return 0;
}