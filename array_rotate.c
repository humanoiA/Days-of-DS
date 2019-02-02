#include<stdio.h>
int main()
{
    int rotate,arr[20],size,temp;
    printf("Input Size of Array\n");
    scanf("%d",&size);
    printf("Enter Your Array-\n");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array is-\n");
    for(int i= 0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nHow many times do you want to rotate?\n");
    scanf("%d",&rotate);
    for(int i= 0;i<rotate;i++)
    {
        temp=arr[0];
        for(int j=0;j+1<size;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
    printf("\nYour array is-\n");
    for(int i= 0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
