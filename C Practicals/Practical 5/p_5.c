//WAP to find reverse of digit

#include<stdio.h>

int main(){

    int n,r=0,last;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        last=n%10;
        r=r*10+last;
        n=n/10;
    }

printf("After reversing the number : %d",r);

    return 0;
}