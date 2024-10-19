 #include <stdio.h>

int main()
{
    int x, y,z;
    printf("Enter three numbers:\t");
    scanf("%d %d %d", &x, &y, &z);

     if (x > y) 
	{
        if (x > z) 
            printf("The greatest number is:\t%d\n", x);
        else 
            printf("The greatest number is:\t%d\n", z);
    } 
	else 
	{
        if (y > z) 
            printf("The greatest number is:\t%d\n", y);
        else 
            printf("The greatest number is:\t%d\n", z);
    }
   
    return 0;
}