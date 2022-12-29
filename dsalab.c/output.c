#include <stdio.h>
#define size 5

struct queue
{
    int data[size];
    int front;
    int rear;
} cq;

int isEmpty()
{
    return cq.front == -1;
}

void enqueue()
{
    if ((cq.rear + 1) % size == cq.front)
    {
        printf("Queue is full");
        return;
    }
    if (cq.front == -1)
    {
        cq.front = cq.rear = 0;
    }
    else
    {
        cq.rear = (cq.rear + 1) % size;
    }
    printf("Enter item: ");
    scanf("%d", &cq.data[cq.rear]);
}
void show()
{
    if(cq.front == -1){
        printf("Empty Queue");
        return;
    }
    int i=cq.front;
    printf("Elements of queue:\n");
    while(i!=cq.rear){
        printf("%d ",cq.data[i]);
        i = (i+1)%size;
    }
    printf("%d ",cq.data[i]);

}
void dequeue_rear()
{
    if(cq.front == -1){
        printf("Empty Queue");
        return;
    }
    int item  = cq.data[cq.front];
    if(cq.front == cq.rear){
        cq.front = cq.rear = -1;
    }else{
        cq.front = (cq.front-1+size) % size;
    }
    printf("Deleted Item %d",item);

}
void dequeue_front()
{
    if(cq.front == -1){
        printf("Empty Queue");
        return;
    }
    int item  = cq.data[cq.front];
    if(cq.front == cq.rear){
        cq.front = cq.rear = -1;
    }else{
        cq.front = (cq.front+1) % size;
    }
    printf("Deleted Item %d",item);
}

int menu()
{
    int choice;
    printf("\n1...............Enqueue from rear\n");
    printf("2...............Enqueue from front\n");
    printf("3..............Dequeue from front\n");
    printf("4...............Show\n");
    printf("5...............Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    cq.front = cq.rear = -1;

    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue_rear();
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            show();
            break;

        case 5:
            printf("Thank you for using Circular Queue program see you later");
            break;
        default:
            printf("Please enter valid choice");
        }

    } while (choice!=4);
}
