#include<stdio.h>
void cart(){
    int i,j,m,n;
    int A[10];
    int B[10];
    printf("enter the size of set A: ");
    scanf("%d",&m);
     printf("Enter the element of Set A: ");
    for(i=0;i<m;i++){
        scanf("%d",&A[i]);
    }
    printf("enter the size of set B: ");
    scanf("%d",&n);
    printf("Enter the element of Set B: ");
    for(j=0;j<n;j++){
        scanf("%d",&B[j]);
    } 
    printf("Cartesian Product AXB: -");
    printf("{");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("{%d,%d},",A[i],B[j]);
        }
    }
    printf("\b");
    printf("}");
}

int main(){
    
    printf(" PANKAJ KUMAR\n");
    printf("2100320120122 \n");
    cart();
    
    return 0;
}
