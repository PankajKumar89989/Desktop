#include<stdio.h>
#define SIZE 20

struct queue
{
    int data[SIZE];
    int front;
    int rear;
};
struct queue lqueue;

void menu(){
    printf(" \n Enqueue 1");
    printf(" \n Dequeue 2");
    printf(" \n Show    3");
    printf(" \n Exit    4");
    printf(" \n Enter your choice");
}
void Enqueue(){
    int item;
    if(lqueue.rear==SIZE-1)
    printf("Queue is full");
    else{
        printf(" enter itam:");
        scanf("%d",&item);
        lqueue.rear++;
        lqueue.data[lqueue.rear]=item;
        printf("item inserted");
        if(lqueue.front==-1)
        lqueue.front=0;
        printf("front=%d,rear=%d",lqueue.front,lqueue.rear);
    }
}
void dequeue(){
    int item;
 if(lqueue.front==-1)
    printf("queue is empty");
else{
    item=lqueue.data[lqueue.front];
    lqueue.front++;
if(lqueue.front>lqueue.rear){
    lqueue.front=lqueue.rear=-1;
    }
    printf("deleted item: %d",item);
    printf("\n front=%d , rear=%d",lqueue.front,lqueue.rear);
    }
}
void show(){
  

}

int main(){
    int choice;
    do{
        menu();
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: Enqueue();
        break;
        case 2: dequeue();
        break;
        case 3: show();
        break;
        case 4: printf("Exiting  ");
        break;
        default: printf("Invalid");   
        }
    }
    while(choice!=4);
}
