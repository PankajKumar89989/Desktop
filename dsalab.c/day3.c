#include<stdio.h>
void findsum(int n){
    long long int sum=1;
    long long int fact=1;
    for(int i=3;i<n;i++){
        fact=fact*i;
        sum+=fact;
    }
    print("sum=%ld",sum);
}
int main(){
    
}