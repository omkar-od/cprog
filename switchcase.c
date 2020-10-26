#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a number of your choice \n");
    scanf("%d",&choice);
    printf("\nFood Item :");
    switch(choice)
    {
        case 1:
            printf("Pizza\n");
            printf("Price : Rs.239");
            break ;
        case 2:
            printf("Burger\n");
            printf("Price : Rs.129");
            break ;
        case 3:
            printf("Pasta\n");
            printf("Price : Rs.179");
            break ;
        case 4:
            printf("French Fries\n");
            printf("Price : Rs.99");
            break ;
        case 5:
            printf("Sandwich\n");
            printf("Price : Rs.179");
            break ;
        default:
            printf("No item found, Try Again");
            break;
    }
        return(0);
}
