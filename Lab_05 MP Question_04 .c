#include <stdio.h>

int main()
{
    int age, income, c_scr;
    printf("Enter your Age:\t");
    scanf("%d", &age);
    printf("Enter your Income:\t");
    scanf("%d", &income);
    printf("Enter your Credit Score:\t");
    scanf("%d", &c_scr);

    if (age >= 18 && income >= 60000 && c_scr >= 600)
        printf("You are eligible for loan");
    else
        printf("You are not eligible for loan");
    
    return 0;
}