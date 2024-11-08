//WAP to find if given number is Prime or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,c=0;

    printf("Enter any Number: ");
    scanf("%d", &n);

    //logic

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
if(c==2)
{
    printf("The given Number is Prime");
}
else
{
    printf("The given Number is Not Prime");
}

getch();

    return 0;
}