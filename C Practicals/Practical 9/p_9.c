//WAP to delete an element from ODA

#include <stdio.h>

int main()
{
    int n,i,a[10],loc;

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter valuse at[%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter location to delete array: ");
    scanf("%d",&loc);

    for(i=loc-1; i<n; i++)
    {
        a[i]=a[i+1];
    }

    n--;

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}