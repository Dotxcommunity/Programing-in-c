//WAP to find frequency of occurance of a given number from array of N elements.

#include<stdio.h>

int main(){

    int a[10],i,n,fr=0,num;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }

printf("\nEnter num to check frequency: ");
scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            fr++;
        }
    }

printf("The frequency of number is := %d",fr);
    return 0;
}