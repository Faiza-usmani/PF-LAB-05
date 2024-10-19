#include <stdio.h>

int main()
{
    int final_marks, result, att, ass_scr;
    float per;
    char grade;

    printf("Enter your attendance percentage (0-100):\t");
    scanf("%d", &att);
    printf("Enter your assignment scores percentage (0-100):\t");
    scanf("%d", &ass_scr);
    printf("Enter your total exam result percentage (0-100):\t");
    scanf("%d", &result);

    if (att < 0 || att > 100 || ass_scr < 0 || ass_scr > 100 || result < 0 || result > 100) 
    {
        printf("INVALID INPUT");
        return 1;
    }
    
    final_marks = (att * 25/100.0) + (ass_scr * 25/100.0) + (result * 50/100.0);

    if (final_marks >= 50)
    {
        if (final_marks >= 90)
            grade= 'A';
        else if (final_marks >= 80)
            grade = 'B';
         else if (final_marks >= 70)
            grade = 'C';
         else if (final_marks >= 60)
            grade = 'D';
         else 
            grade = 'E';
    }
    else 
        grade = 'F';
    
    printf("Your final grade based on attendence, assignment score and exam reult is %c", grade);
    
    return 0;
}