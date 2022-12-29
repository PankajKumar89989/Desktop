#include<stdio.h>
int main(){
    int i=0;
    char postfix[30];
    // 2 5 + 6 2 / 5 * - 7 + 
    printf("Enter postfix expression:");
    gets(postfix);
    printf("postfix=%s",postfix);
    while(postfix[i]!='\0')
    {
        if(postfix[i]!=' ')
  {
    char symbol=postfix[i];
    if (symbol>='0' && symbol<='9') 
    s.push(symbol-'0');
    else{
        int b=s.pop();
        int a=s.pop();
        num=calc(a,b,symbol);
        s.push(num);
    }
  }
  i++;
    }
    printf("Aus=%d",s.pop());
}
  