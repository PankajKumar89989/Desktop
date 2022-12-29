#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

Node *initialize(){
    Node * node = (Node *) malloc(sizeof(Node));
    node=NULL;
    return node;
 
}
struct Node * createNode(int x){
    Node * node = (Node *) malloc(sizeof(Node));
    node->val =x;
    node->next=NULL;
    return node;

}

void insert_beg(Node *start, int x){
    Node *newnode =createNode(x);
    if(start !=NULL){
        newnode->next = start;
    }
    start =newnode;

}
void insert_last(Node **start, int x){
    Node *newnode =createNode(x);
    if(*start == NULL)
    {
        *start = newnode;
    }
    else{
    Node *temp= *start;
    while (temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
void isEmpty(Node *start){
    if(start)
}
// deleting the node
void del_beg(Node **start){
    if(*start ==NULL){
        printf("Empty list");
        return;
    }
    Node *temp = *start;
    *start =(*start)->next;
    printf("\n%d node deleted\n",temp->val);
    free(temp);
}
void del_last(Node **start){
    if(! isEmpty(*start)){
        Node *temp=*start;
        if(temp->next==NULL){
            printf("%d deleted node",temp->val);
            *start=NULL;
        }
        else{
            


        }
    }
}

void show(Node *start){
    if(start == NULL){
        printf("List is empty");
        return;
    }
    printf("Linked list is\n");
    while(start!=NULL){
        printf("%d | %p\t",start->val,start->next);
        start =start->next;
    }
}