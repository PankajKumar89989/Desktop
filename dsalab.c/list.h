#include <stdio.h>
#include <stdlib.h>
typedef struct Node//for shorcut name
{
    int val;
    struct Node*next;
}Node;

Node*initialize()
{
    Node*node= (Node*)malloc(sizeof(Node));
    node=NULL;
    return node;
};
Node*createNode(int x)
{
    Node*node=(Node*)malloc(sizeof(Node));
    node->val=x;
    node->next=NULL;
};

void insert_beg(Node**start,int x)
{
    Node*newNode=createNode(x);
    if(*start!=NULL)
    {
        newNode->next=*start;
    }
    *start=newNode;
}

void show(Node*start)
{
     if(start==NULL)
    {
        printf("Empty List\n");
        return ;
    }
    printf("Node are\n");
    Node*temp=start;
    while(temp!=NULL)
    {
        printf("%d|%p\t",temp->val,temp->next);
        temp=temp->next;
    }
}
void insert_end(Node **start,int x){
    Node *newnode=createNode(x);
    Node *temp=*start;
    newnode->next=NULL;
    if(*start==NULL){
        *start=newnode;
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
void remove_beg(Node**start){

    if(*start==NULL){
        printf("Empty list");
        return;
    }
    Node *temp=*start;
    *start=(*start)->next;
    printf("%d node deleted ",temp->val);
    free(temp);
}
void delete_end(Node**start){
    if(*start==NULL){
        printf("Empty list");
        return;
    }
    Node *temp=*start;
    if(temp->next==NULL){
        *start=NULL;
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
    }
    printf("%d node deleted ",temp->val);
    free(temp);

}