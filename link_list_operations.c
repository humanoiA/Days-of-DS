#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main()
{
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     temp->data=1;
     temp->link=temp;
     printf("%d",temp->data);
    return 0;
}
