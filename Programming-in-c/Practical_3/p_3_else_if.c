//WAP to accept a number and display it in number using nested if

#include<stdio.h>

int main()
{
    int n;

    printf("Enter any Number: ");
    scanf("%d", &n);

    //logic
    if(n==0)
        printf("Zero");

    else if(n==1)
        printf("One");

          else if(n==2)
                printf("Two");

               else if(n==3)
                    printf("Three");

                   else if(n==4)
                        printf("Four");

                        else if(n==5)
                            printf("Five");

                           else if(n==6)
                                 printf("Six");

                                else if(n==7)
                                    printf("Seven");

                                    else if(n==8)
                                         printf("Eight");

                                       else if(n==9)
                                            printf("Nine");

                                           else if(n>9)
                                                printf("Please Enter a single digit value");

                                                else
                                                
                                                    printf("Invalid Value");
                                                
    
    return 0;
}