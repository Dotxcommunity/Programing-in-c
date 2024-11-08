//WAP to reverse the array

#include<stdio.h>

int main()
{
    int a[10],i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&a[i]);
    }

printf("After reversing the array: ");

     for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
        
    }

    return 0;
}