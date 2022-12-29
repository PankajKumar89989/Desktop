#include<stdio.h>
int main(){
    int n=16;
    PANKAJ:
    if(n>0)
    {
        printf("%d ",n);
        n=n-5;
    }
    goto PANKAJ;
    return 0;
}