#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,a[10];
#define max 6
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
void enqueue(int a[]){
    if(rear+1==front||((rear==max)&&(front==0))){
        printf("Queue Overflow\n");
    }
    else{
        if(front==-1&&rear==-1){
            front=0;
            rear=0;
        }
        else if(rear==max)
        rear=0;
        else
        rear+=1;
        printf("Enter Element");
        scanf("%d",&a[rear]);
        printf("Element Inserted Successfully\n");
    }
}
void dequeue(int a[]){
    if(front==max){
        front=0;
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    printf("Queue Empty\n");
    }
    else{
        front+=1;
    }
}
void display(int a[]){
    if(front==rear){
        printf("No element in queue\n");
    }
    else{
    printf("Queue is-\n");
    if(rear<front){
        for(int i=0;i<=rear;i++)
        printf("%d\t",a[i]);
        for(int i=front;i<=max;i++)
        printf("%d\t",a[i]);
    }
    else{
        for(int i=front;i<=rear;i++)
        printf("%d\t",a[i]);        
    }
    }
    printf("\n");
}
void peek(int a[]){
    printf("Front element is %d\n",a[front]);
    printf("Rear element is %d\n",a[rear]);
}
