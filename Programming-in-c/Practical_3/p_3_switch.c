//WAP to accept a number and display it in number using Switch case

#include<stdio.h>

void main()
{

    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    switch(n)
    {
        case 0:
            printf("Zero");
            break;

        case 1:
            printf("One");
            break;

        case 3:
            printf("Three");
            break;
            
        case 4:
            printf("Four");
            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;

        default:
            printf("\"Please Enter single Digit value\"");

    }


}