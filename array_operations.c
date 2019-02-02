//insert,traverse,delete,update
#include<stdio.h>
#include<stdlib.h>
void insert(int []);
void display(int []);
void delete(int []);
void search(int []);
int len;
int main()
{
    int i,j,a[10];
    printf("Enter number of elements");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1){
    printf("Select Operation\n");
    printf("1.Insert Element\n2.Display\n3.Delete Element\n4.Search Element\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        insert(a);
        break;
        case 2:
        display(a);
        break;
        case 3:
        delete(a);
        break;
        case 4:
        search(a);
        break;
        default:
        exit(0);
    }
    }
    return 0;
}
void search(int a[])
{
    int element,i;
    printf("Enter element to search\n");
            scanf("%d",&element);
            for(i=0;i<len;i++){
                if(a[i]==element){
                    printf("Element found at %d location",i);
                }
            }
}
void delete(int a[])
{
    int element,loc;
    printf("1.delete at start\n");
    printf("2.delete at a location\n");
    printf("3.delete at end\n4.delete an element\nEnter Choice\n");
    int x,i;
    scanf("%d",&x);
    switch(x){
        case 1:
            for(i=0;i<len;i++)
            {
                    a[i]=a[i+1];
                if(i+1==len)
                {
                    a[i]=0;
                }

            }
            break;
        case 2:
        printf("Enter location\n");
        scanf("%d",&loc);
        for(i=loc;i<len;i++)
            {
                    a[i]=a[i+1];
                if(i+1==len)
                {
                    a[i]=0;
                }
            }
            break;
        case 3:
            a[len]=0;
//            a[len]=element;
            break;
        case 4:
            printf("Enter element to delete\n");
            scanf("%d",&element);
            for(i=0;i<len;i++){
                if(a[i]==element){
                    int j;
                    for(j=i;j<len;j++)
            {
                    a[j]=a[j+1];
                if(j+1==len)
                {
                    a[j]=0;
                }
            }
                }
            }
            break;
        default:
        printf("Wrong Chocie");
    }
    len--;
}
void insert(int a[])
{
    printf("Enter element to insert\n");
    int element,loc;
    scanf("%d",&element);
    printf("1.insert at start\n");
    printf("2.insert at a location\n");
    printf("3.insert at end\nEnter Choice\n");
    int x,i;
    scanf("%d",&x);
    switch(x){
        case 1:
            for(i=len;i>=0;i--)
            {
                if(i==0)
                {
                    a[i+1]=a[i];
                    a[i]=element;
                }
                else
                {
                    a[i+1]=a[i];
                }

            }
            break;
        case 2:
        printf("Enter location\n");
        scanf("%d",&loc);
        for(i=len;i>=loc;i--)
            {
                if(i==loc)
                {
                    a[i+1]=a[i];
                    a[i]=element;
                }
                else
                {
                    a[i+1]=a[i];
                }

            }
            break;
        case 3:
            a[len+1]=a[len];
            a[len]=element;
            break;
        default:
        printf("Wrong Chocie");
    }
    len++;
}
void display(int a[])
{
    printf("Your Array is\n");
     for(int i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}