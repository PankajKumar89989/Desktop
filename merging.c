#include<stdio.h>
int main(){
    int array1[50],array2[50], size1, size2,i,k, marge[100];
    printf("enter array 1 size:");
    scanf("%d",&size1);
    printf("enter array 1 elements:");
    for(i=0; i<size1; i++)
    {
        scanf("%d",&array[1]);
        merge[i] = array1[i];   
    }
    k= i;
    printf("enter array 2 size");
    scanf("%d", &size2);
    printf("enter array 2 element:");
    for(i=0; i<size2;i++)
    {
        sacnf("%d", &array2[i]);
        merge[k] =array2[i]
        k++;
    }
    printf(" the new array after merging is ");
    for(i=0; i<k; i++)
    printf("%d", merge[i]);
    return 0;
    

}