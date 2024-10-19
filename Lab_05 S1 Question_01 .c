#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);

    if (age <= 59  )
    {
        if (age >= 0 && age <= 12)
        {
            printf("You are a child.");
        }
        else if (age > 12 && age <= 19)
        {
            printf("You are a teenager.");
        }
        else if (age > 19 && age <= 59)
        {
            printf("You are a adult.");
        }
    }
    else
    {
        printf("You are a senior.");
    }
    return 0;
}