#include"list.h"
int main(){
    Node*st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    int val1;
    printf("\nenter value to be found:\n");
    scanf("%d",&val1);
    Node*temp=st1;
    while(temp!=NULL){
        if(temp->val==val1){
            printf("found");
            break;
        }
        temp=temp->next;
        if(temp==NULL)
        printf("NOt found");
    }
}