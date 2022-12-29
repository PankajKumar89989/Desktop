#include"list.h"
int main(){
    Node *st1=initialize();
    Node *st2=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    insert_beg(&st2,20);
    insert_beg(&st2,25);
    insert_beg(&st2,45);
    printf("st1 content:\n");
    show(st1);
    printf("\nst2 content:\n");
    show(st2);
    Node *temp=st1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=st2;
    printf("\nConcatenated list\n");
    show(st1);


}