#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter num:");
    scanf("%d", &num);

    while (num)
    {
        count = count + (num & 1);
        num = num >> 1;
    }
    printf("%d", count);
    
    return 0;
}