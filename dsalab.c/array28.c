#include<stdio.h>
int search(int arr[],int s,int key);{
int i;
int count=0;
for(i=0;i<s;i++)
{
    if(arr[i]==key)
    count++;
}
return count;
}

int main(){
    int num[]={2,5,8,9,7,4,1,5,2,4,78,14,52};
    int s=13;
    int count= search(num,s,100);
    if (count){
        printf()

    }
}