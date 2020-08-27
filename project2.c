#include<stdio.h>
void main()
{
    float marks;
    printf("Enter the marks of the student (out of 100): \n");
    scanf("%f",&marks);
    if(marks<=100 && marks>=85)
        printf("A grade");
    else if(marks<85 && marks>=70)
        printf("B grade");
    else if(marks<70 && marks>=55)
        printf("C grade");
    else if(marks<55 && marks>=40)
        printf("D grade");
    else
        printf("F grade");
}
