#include<stdio.h>
int main()
{
    int marks ;
    printf("Enter the marks obtained by the student out of 100  \n");
    scanf("%d" , &marks);
    if(marks>=85 && marks<=100)
        printf("Grade Obtained : A");
    else if(marks>=70 && marks<85 )
        printf("Grade Obtained : B");
    else if(marks>=55 && marks<70)
        printf("Grade Obtained : C");
    else if(marks>=40 && marks<55)
        printf("Grade Obtained : D");
    else
        printf("Grade Obtained : F");
    return(0);
}
