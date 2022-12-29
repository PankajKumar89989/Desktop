#include "linklist.h"
#include<stdio.h>
int main(){
    Node *list1 = initialize();
    insert_beg(&list1,10);
    insert_beg(&list1,20);
    insert_beg(&list1,30);
    insert_beg(&list1,40);
    insert_beg(&list1,50);
    show(list1);
}