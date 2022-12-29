#include <stdio.h>
#define size 5
struct item 
{
    int value;
    int priority;
};
struct queue
{
    int front;
    int rear;
    struct item data[size];
}pq;

void enqueue(){
    if ((pq.rear+1)%size==pq.front){
        printf("queue is full");
        return;
    }
    if(pq.front==-1)
    pq.front=pq.rear=0;
    else
    pq.rear=(pq.rear+1)%size;
    printf("Enter item value:");
    scanf("%d",&pq.data[pq.rear].value);
    printf("Enter priority:");
    scanf("%d",&pq.data[pq.rear].priority);
    printf("Item %d inserted with %d priority",pq.data[pq.rear].value,pq.data[pq.rear].priority);

}
void dequeue(){
    struct item temp;
    if(pq.front==-1){
        printf("Queue is empty");
        return;
    }
    if(pq.rear==pq.front){
        temp=pq.data[pq.front];
        pq.front=pq.rear=-1;
    }
    int i=pq.rear;
    while(i!=pq.front){
        if(pq.data[i].priority>pq.data[i-1].priority){
            temp=pq.data[i];
            pq.data[i]=pq.data[i-1];
            pq.data[i-1]=temp;
        }
        i=(i-1+size)%size;
    }
    temp=pq.data[pq.front]; //remove highest priority element
    pq.
    
}
void show(){
    if(pq.front==-1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Element of priority queue\n");
    printf("value    Priority");
    int i =pq.front;
    while 

}
int menu()
{
    int choice;
    printf("\nWelcome to the implemention of priority queue\n\n");
    printf("1................Enqueue\n");
    printf("2................Dequeue\n");
    printf("3................Show\n");
    printf("4...............Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;



}

int main()
{
    int choice;
    pq.front=pq.rear

}






// struct queue
// {
//     int data[size];
//     int front;
//     int rear;
// } cq;

// int isEmpty()
// {
//     return cq.front == -1;
// }

// void enqueue()
// {
//     if ((cq.rear + 1) % size == cq.front)
//     {
//         printf("Queue is full");
//         return;
//     }
//     if (cq.front == -1)
//     {
//         cq.front = cq.rear = 0;
//     }
//     else
//     {
//         cq.rear = (cq.rear + 1) % size;
//     }
//     printf("Enter item: ");
//     scanf("%d", &cq.data[cq.rear]);
// }
// void show()
// {
//     if(cq.front == -1){
//         printf("Empty Queue");
//         return;
//     }
//     int i=cq.front;
//     printf("Elements of queue:\n");
//     while(i!=cq.rear){
//         printf("%d ",cq.data[i]);
//         i = (i+1)%size;
//     }
//     printf("%d ",cq.data[i]);

// }
// void dequeue_rear()
// {
//     if(cq.front == -1){
//         printf("Empty Queue");
//         return;
//     }
//     int item  = cq.data[cq.front];
//     if(cq.front == cq.rear){
//         cq.front = cq.rear = -1;
//     }else{
//         cq.front = (cq.front-1+size) % size;
//     }
//     printf("Deleted Item %d",item);

// }
// void dequeue_front()
// {
//     if(cq.front == -1){
//         printf("Empty Queue");
//         return;
//     }
//     int item  = cq.data[cq.front];
//     if(cq.front == cq.rear){
//         cq.front = cq.rear = -1;
//     }else{
//         cq.front = (cq.front+1) % size;
//     }
//     printf("Deleted Item %d",item);
// }

// int menu()
// {
//     int choice;
//     printf("\n1...............Enqueue from rear\n");
//     printf("2...............Dequeue from rear\n");
//     printf("3..............Dequeue from front\n");
//     printf("4...............Show\n");
//     printf("5...............Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);
//     return choice;
// }

// int main()
// {
//     int choice;
//     cq.front = cq.rear = -1;

//     do
//     {
//         choice = menu();
//         switch (choice)
//         {
//         case 1:
//             enqueue();
//             break;
//         case 2:
//             dequeue();
//             break;
//         case 3:
//             dequeue_front();
//             break;
//         case 4:
//             show();
//             break;

//         case 5:
//             printf("Thank you for using Circular Queue program see you later");
//             break;
//         default:
//             printf("Please enter valid choice");
//         }

//     } while (choice!=4);
// }

