//WAP to find sum ao any entered number

#include<stdio.h>

void main()
{
    int n, s=0;

    printf("Enter any numbers: ");
    scanf("%d", &n);

    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    printf("The sum of digits is %d ", s);
}