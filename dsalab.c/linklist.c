#include<stdio.h>
#include<stdlib.h>
struct list{
    int value;
    struct list*next;
};
struct list *start;
void insert_end(){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("enter value:\n");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;

    }
    else{
    struct list *node=start;
    while(node->next!=NULL){
        node=node->next;
    }
    node->next=newnode;
    }
    
    printf("node inserted\n");
}

void add_beg(){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("enter value:\n");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start!=NULL){
        newnode->next=start;
    }else{
        newnode->next=start;
    }
    start=newnode;
    printf("Node inserted at begining");
}
void insert_post(){
    int pos; int flag=0;
    printf("Enter Position:\n");
    scanf("%d",&pos);
    if(start==NULL){
        insert_end();
    }
    else{
        struct node *temp=start;
        int counter=1;
        while(temp!=NULL){
            if(counter==pos-1){
                flag=1;
                struct link *newnode=(struct list*)malloc(sizeof(struct list));
               printf("Enter value:\n");
               scanf("%d",&pos);  
            }
            temp=temp->next;
            counter++;
        }
        if(!flag){
            insert_last();
            print("node inserted at last");
        }
    }
}
void show(){
    if(start==NULL){
        printf("empty list");
        return ;
    }
    printf("Node are:\n");
    struct list*temp=start;
    while(temp!=NULL){
        printf("%d|%p\t",temp->value,temp->next);
        temp=temp->next;
    }
}

int main()
{
    start=NULL;
    int choice;
    do{
         printf("\n1.........insert from rear\n");
        printf("2.........insert from from\n");
         printf("3..........show\n");
        printf("4..........Exit\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_end();
            break;
        case 2:
             add_beg();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("existing.....\n");
            break;
        
        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 4);
scanf("%d",&choice);


}
// int main(){
//     struct list*node;
//     struct list*node1;
//     node=(struct list*)malloc(sizeof(struct list));
//     node1=(struct list*)malloc(sizeof(struct list));
//     if (node==NULL)
//     {
//         printf("memory n|a\n");
//     }
//     printf("Enter value:\n");
//     scanf("%d",&node->value);
//     node->next=node1;
//     printf("Enter value:\n");
//     scanf("%d",&node->value);
//     node1->next=NULL;
//     printf("value=%d\n",node->value);
//     printf("%d\n",node->next);
//     printf("%d\n",node);
//     printf("value=%d\n",node1->value);
//     printf("%d\n",node1->next);
//     printf("%d\n",node1);

// }