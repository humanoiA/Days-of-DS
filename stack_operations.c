#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1,a[20];
void push(int[]);
void pop();
void peek(int []);
void display(int []);
int main()
{
    while(1){
    printf("Select Operation\n");
    printf("1.Push Element\n2.Display\n3.Pop Element\n4.Peek Element\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        push(a);
        break;
        case 2:
        display(a);
        break;
        case 3:
        pop();
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
void push(int a[]){
if(top+1==max){
    printf("Stack Overflow\n");
}
else{
    printf("Enter element");
    int element;
    scanf("%d",&element);
    top+=1;
    a[top]=element;
}
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        top-=1;
        printf("Pop Successful\n");
    }

}
void display(int a[]){
    printf("Stack is-");
for(int i =0;i<=top;i++){
    printf("%d\t",a[i]);
}
printf("\n");
}
void peek(int a[]){
    printf("Top Element is-");
printf("%d\n",a[top]);
}