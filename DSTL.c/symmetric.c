#include<stdio.h>
int main(){
    int arr1[100],arr2[100],arr3[100];
    int n,m,i,j,k=0;
    printf("NAME= PANKAJ KUMAR \n");
    printf("ROOL NO.= 2100320120122 \n");
    printf("enter the cardinality of set 1:\n");
    scanf("&d",&n);
    printf("enter the element of set 1:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);

    }
    printf("enter the cardinality of set 2:\n");
    scanf("%d",&m);
    printf("enter the element of set 2:\n");
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);

    }
    int flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr2[j]==arr1[i]){
                arr3[k]=arr1[i];
                k++;
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("They are disjoint sets:");
    }
    else{
        printf("This is the intersection of set1 & set2:\n");
        for(i=0;i<k;i++){
            printf("%d",arr3[i]);
        }
    }
}