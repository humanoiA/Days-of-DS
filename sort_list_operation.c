#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *insert(struct node *);
struct node *display(struct node *);
struct node *delete(struct node *);
struct node *locate(struct node *);
int main()
{
    struct node *start=NULL;
    while(1){
    printf("Select Operation\n");
    printf("1.Insert Element\n2.Display\n3.Delete Element\n4.Locate Element\n5.Any other digit to exit\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        start=insert(start);
        break;
        case 2:
        start=display(start);
        break;
        case 3:
        start=delete(start);
        break;
        case 4:
        start=locate(start);
        break;
        default:
        exit(0);
    }
    }
    return 0;
}
struct node *insert(struct node *start)
{
    if(start==NULL)
    {
        printf("Enter element to insert\n");
        struct node *temp;
        int element;
        temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&element);
        temp->data=element;
        start=temp;
        temp->link=NULL;
    }
    else
    {
        struct node *temp,*temp2;
        int element;
        temp2=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&element);
        temp2->data=element;
        temp=start;
        if(temp->data>element){
            temp2->link=temp;
            start=temp2;
            return start;
        }
        while(temp->link!=NULL)
        {
            if(temp->link->data>element)
            {
                temp2->link=temp->link;
                temp->link=temp2;
                return start;
            }
            temp=temp->link;
        }
        temp2->link=NULL;
        temp->link=temp2;
    }
    return start;
}
struct node *delete(struct node *start)
{
    if(start==NULL)
    {
        printf("No element in list\n");
    }
    else
    {
        int count=0;
        struct node *temp,*temp2;
        temp=start;
        int element;
        printf("Enter element to delete\n");
        scanf("%d",&element);
        if(temp->data==element){
            start=temp->link;
            free(temp);
            return start;
        }
        while(temp->link!=NULL)
        {
            count++;
            if(temp->link->data==element)
            { 
       //         printf("Element found at %d",count);
                temp2=temp->link;
                temp->link=temp2->link;
                free(temp2);
                return start;
            }
            temp=temp->link;
        }
        printf("No Element found\n");
    }
    return start;
}
struct node *display(struct node *start){
    if(start==NULL)
    printf("Empty\n");
    else{
        struct node *temp=start;
        while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
        }
        printf("\n");
    }
    return start;
}
struct node *locate(struct node *start){
    if(start==NULL)
    {
        printf("No element in list\n");
    }
    else
    {
        int count=1;
        struct node *temp,*temp2;
        temp=start;
        int element;
        printf("Enter element to locate\n");
        scanf("%d",&element);
        if(temp->data==element){
            printf("Element found at %d location\n",count);
            return start;
        }
        while(temp->link!=NULL)
        {
            count++;
            if(temp->link->data==element)
            { 
                printf("Element found at %d location\n",count);
                return start;
            }
            temp=temp->link;
        }
        printf("No Element found\n");
    }
    return start;
}