#include<stdio.h>
void print(int n){
    int temp=n;
    int i=-5;
    LABEL:
    printf("%d ",temp);
    temp=temp+i;
    if(temp<=0){
         i=5;
    }
    if(temp<=n)
        goto LABEL;
}
int main(){
    int n;
    print("enter the element");
    scanf("%d",&n);
    print("n");
    return 0;
}