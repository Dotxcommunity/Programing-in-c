//WAP to insert an element in ODA at a given position

#include <stdio.h>

int main()
{
    int n,i,a[10],item,loc;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter Value at position [%d] :", i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter item: ");
    scanf("%d",&item);


    printf("\nEnter location: ");
    scanf("%d",&loc);

    for(i=n;i>=loc;i--)
    {
        a[i]=a[i-1];
    
    }
    a[i]=item;
    n++;

printf("after inserting value: \n");
    for(i=0;i<n;i++){

        printf("%d\n",a[i]);
    }

    return 0;
}