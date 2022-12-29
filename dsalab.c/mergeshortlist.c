//find a middle node of any linked list 
#include"list.h"
 void Split_List(Node*start,Node**List1,Node**List2)
 {
    Node*fast;
    Node*slow;
    fast=start->next;
    slow=start;
 
 while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    *List1=start;
    *List2=slow->next;
    slow->next=NULL;
}
Node* MergesortedList(Node*List1,Node*list2)
{
    Node*result;
    if(List1==NULL)
    return list2;
    if(list2==NULL)
    return List1;
    if(List1->val <=list2->val)
    {
        result=List1;
        result->next=MergeSortedListList(List1->next,list2);
    }
    else{
        result=list2;
        result->next=MergeSortedList(List1,list2->next);
    }
}
void  MergeSort(Node**start)
{
    if(*start==NULL ||(*start)->next==NULL)
    return;
    Node*list1;
    Node*list2;
    Split_List(start,&list1,&list2);
    MergeSort(&list1);
    MergeSort(&list2);
    *start=MergeSortedList(list1,list2);
}
int main()
{
    Node *start=initialize();
    insert_end(&start,1);
    insert_end(&start,5); 
    insert_end(&start,4); 
    insert_end(&start,9); 
    insert_end(&start,10); 
    insert_end(&start,6);
    printf("\nBefore Sorting\n");
    show(start);
    mergeSort(&start);
    printf("\nSorted List:\n");
    show(start);

}