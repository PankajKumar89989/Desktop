#include<stdio.h>
#include<stdlib.h>
struct list
{
    int val;
    struct list *next;
};
struct list *start;
void add_at_beg(){
    struct list *newnode= (struct list *)malloc(sizeof(struct list));
    printf("Enter value ");
    scanf("%d",&newnode->val);
    newnode->next=NULL;
    if(start!=NULL)
    {
        newnode->next=start;
    }
    start=newnode;
    printf("Node inserted at beginning");

}
void add_at_last()
{
    struct list *newnode= (struct list *)malloc(sizeof(struct list));
    printf("Enter value ");
    scanf("%d",&newnode->val);
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        struct list* node= start;
        while(node->next!=NULL)
        {
            node=node->next;
        }
        node->next=newnode;
    }
    printf("Node inserted at last");
}
void add_before()
{
    int val, flag=0;
    printf("Enter value to search: ");
    scanf("%d",&val);
    struct list * node = start;
    if(start->val==val)
    {
        flag=1;
        add_at_beg();
    }
    else
    {
        struct list * newnode= (struct list *)malloc(sizeof(struct list));
        printf("Enter value: ");
        scanf("%d",&newnode->val);
        struct list *prev = start;
        node = node->next;
        while(node!=NULL)
        {
            if(node->val==val)
            {
                flag=1;
                newnode->next= node;
                prev->next = newnode;
            }
            node=node->next;
            prev=prev->next;
        }
    }
}
void add_at_pos()
{
    int pos,flag=0;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(start==NULL|| pos == 1)
    {
        add_at_last();
        return ;
    }
    else
    {
        struct list *temp= start;
        int counter=1;
        while(temp!=NULL)
        {
            if(counter == pos-1)
            {
                flag=1;
                struct list *newnode = (struct list *)malloc(sizeof(struct list));
                printf("Enter value");
                flag=1;
                scanf("%d",&newnode->val);
                newnode->next= temp->next;
                temp->next= newnode;
            }
            temp= temp->next;
            counter++;
        }
        if(!flag)
        {
        add_at_last();
        printf("Invalid position Node inserted at last");
        }
    }
}
void show()
{
    if(start==NULL)
    {
        printf("Empty List");
        return;
    }
    printf("Nodes are:\n");
    struct list* temp= start;
    while(temp!=NULL)
    {
        printf("%d|%p\t",temp->val,temp->next);
        temp=temp->next;
    }
}
void del_from_beg()
{
    int val;
    if(start==NULL)
    {
        printf("Empty list");
        return;
    }
    val= start->val;
    start= start->next;
    printf("deleted Node with %d value",val);
}
void del_from_end()
{
    if(start==NULL)
    {
        printf("Empty");
        return;
    }
    if(start->next==NULL)
    {
        start=NULL;
        return;
    }
    struct list *temp;
    struct list *prev;
    temp= start->next;
    prev= start;
    while(temp->next!=NULL)
    {
        temp= temp->next;
        prev= prev->next;
    }
    prev->next=NULL;
    printf("%d deleted",temp->val);
    free(temp);
}

void menu()
{
    printf("\n1___________Add at last");
    printf("\n2___________Add at beg");
    printf("\n3___________Insert at position");
    printf("\n4___________Insert before");
    printf("\n5___________Del from beginning");
    printf("\n6___________Del from end");
    printf("\n7___________Show");
    printf("\n8___________Exit");
    printf("\nEnter your Choice: ");
}
int main()
{
    int choice;
    start = NULL;
    printf("******Linked List Program*******");
    do{
    menu();
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add_at_last();
        break;
    case 2:
        add_at_beg();
        break;
    case 3:
        add_at_pos();
        break;
    case 4:
        add_before();
        break;
    case 5:
        del_from_beg();
        break;
    case 6:
        del_from_end();
        break;
    case 7:
        show();
        break;
    case 8:
        printf("See you later");
        break;
    default:
        printf("Enter a valid choice");
    }
    }while(choice!=8);
}