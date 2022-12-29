#include<stdio.h>
int check(int a){
    if(a<=3){
        return 0;
    }
    else if(a%3==0){
        return 1;
    }
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(check(n)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}