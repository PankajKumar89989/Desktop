#include<stdio.h>
int main(){
    int calc(int a, int b,char s)
    {
        switch(s)
        {
            case'+':
            return a+b;
            case'-':return a-b;
            case'*':return a*b;
            case'/':return a/b;
            case'%':return a%b;
        }
    }
}
#define size 25
struct stack{
    {
    int data[size];
    int top;
}s;
int push(int n)
{
    if (s.top==size-1)
    return 0;
    s.data[++s.top]=n;
}
int pop(){
    if (s.top==-1)
    return 0;
    return s.data[s.top--];
}
num=calc(a,b,symbol);
s.push(num);
}
