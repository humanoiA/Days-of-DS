#include<stdio.h>
#include<stdlib.h>
#define max 6
int front=-1,rear=-1,a[10];
void enqueue(int []);
void dequeue(int []);
void display(int []);
void peek(int a[]);
int main(){
  while(1){
    printf("Select Operation\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Peek\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        enqueue(a);
        break;
        case 2:
        dequeue(a);
        break;
        case 3:
        display(a);
        break;
        case 4:
        peek(a);
        break;
        default:
        exit(0);
    }
    }
    return 0;
}
void enqueue(int a[])
{
    if(rear+1==max){
        printf("Queue Overflow\n");
    }
    else{
        printf("Enter Element-");
        if(rear==-1){
            front+=1;
        }
        rear+=1;
        scanf("%d",&a[rear]);
        printf("Element insertion successful\n");
    }
  //  printf("%d..%d",front,rear);
}
void dequeue(int a[])
{
    if(front-1==rear||front==-1){
        printf("No element in queue\n");
    }
    else{
        front=front+1;   
        printf("Element Deletion successful\n"); 
    }
    //printf("%d..%d",front,rear);
}
void display(int a[]){
    if(front-1==rear||front==-1){
        printf("No element in queue\n");
    }
    else{
    printf("Queue is-\n");
    for(int i=front;i<=rear;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}}
void peek(int a[]){
    printf("Front element is %d\n",a[front]);
    printf("Rear element is %d\n",a[rear]);
}