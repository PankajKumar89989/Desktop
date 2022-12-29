#include<stdio.h>
int gcdd(int a,int b){
if(b==0){
    return a;
}
else{
    return  gcdd(b,a%b);
}
gcdd(a,b)=gcdd(b,a%b);
}

