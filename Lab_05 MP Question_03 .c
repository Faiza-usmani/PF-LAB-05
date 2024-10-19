#include <stdio.h>

int main()
{
    char x, a, b;
    char key = '3';
    printf("Enter a character to be encrypted:\t");
    scanf("%c", &x);

    a = x ^ key;    

    printf("Your encypted character is %c \n", a);

    b = a ^ key;      

    printf("Your original character was %c", b);
    return 0;
}