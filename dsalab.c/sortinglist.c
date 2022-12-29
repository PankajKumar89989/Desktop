#include"list.h"
void Helper(Node**start,Node*newnode) 
{
    if(newnode->val >(*start)->val)
    {
        newnode->next=*start;
        *start=newnode;
    }
    else
    {
        Node*current=(*start)->next;
        Node*prev=*start;
        while(current!=NULL)
        {
            if(current->val > newnode->val)
            {
                break;
            }
            current=current->next;
            prev=prev->next;

        }
        newnode->next=prev->next;
        prev->next=newnode;
    }
}
void SortList(Node **start){
    Node *start2= *start;
    *start = (*start)->next;
    start2->next=NULL;

    while(*start !=NULL){
        Node *temp =*start;
        *start =(*start)->next;
        temp->next =NULL;
        Helper(&start2,temp);
    }
}

int main(){
    Node *st1=initialize();
    insert_beg(&st1,9);
    insert_beg(&st1,7);
    insert_beg(&st1,2);
    insert_beg(&st1,5);
    insert_beg(&st1,4);
    printf("\n---------Input List-------------");
    show(st1);
    SortList(&st1);
    printf("\n---------Sorted List------------");
    show(st1);
}