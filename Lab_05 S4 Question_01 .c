# include <stdio.h>

main()
{
    int num1, num2, x = 0, y, z;
    printf("Enter number 1: \t");
    scanf("%d", &num1);
    
    printf("Enter number 2: \t");
    scanf("%d", &num2);
    
    x = num1 ^ num2;
    y = x ^ num1;
    z = x ^ num2;
    printf("The exchanged values are : \n");
    printf("Number 1 =\t%d \nNumber 2 =\t%d", y, z);
    return 0;
}

