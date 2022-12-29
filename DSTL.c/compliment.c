#include<stdio.h>
int main(){
    int n,c,arr[10],k=0;
    int u[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int comp[10];
    printf("NAME = PANKAJ KUMAR \n");
    printf("ROLL NO. = 2100320120122 \n");
    printf("Enter the number of elements: in set A ");
    scanf("%d",&n);
    printf("\nEnter the elemnts of the set A: ");
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }   
    for(int i=0;i<15;i++){
        int flag =0;
        for(int j=0;j<n;j++){
            if(arr[j]==u[i]){
                flag=1;
            }}
        if(flag==0){
            comp[k]=u[i];
            k++;
        }  }
    printf(" The complement of A is:\n");
    for(int i=0;i<k;i++){
        printf("%d ",comp[i]);
    }
    return 0;
}

