Node* middle(Node*start,Node*last)
{
    Node*slow=start;
    Node*fast=start->next;
    while(fast!=last)
    {
        fast=fast->next;
        if(fast!=last)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

Node* Binarysearch(Node *start,int sval)
{
    Node *last=Null;
    d0{
        Node*mid=middle(start,last);
        if(mid==NULL)
        return NULL;
        if(mid->val==sval)
        return mid;
        if(mid->val<sval)
        {
            start=mid->next;
        }
        else{
            lost=mid;
        }
    }
    while(last!=NULL || start!=last);
    return NULL;
}