/*Write a program to display the day of the week based on a number (1–7) using switch-case.*/

#include<stdio.h>
int main()
{
    int days;
    printf("Enter the respected no. according to day in week");
    scanf("%d",&days);
    switch(days)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Wrong no. entered");
        break;
    }
    return 0;
}