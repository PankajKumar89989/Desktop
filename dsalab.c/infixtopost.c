#include <stdio.h>
#define size 25
struct stack
{
    int data[size];
    int top;
} s;
int prcd(char op1,char op2){
    if(op1=='$'||op1=='*'||op1=='/'||op1=='%'){
        return (op2!='$');
    }
    else{
        if(op2=='+'||op2=='-'){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int isempty(){
    return s.top==-1;
}
int peep(){
    return s.data[s.top];
}
int push(int n)
{
    if (s.top == size - 1)
    {
        return 0;
    }
    else
    {
       s.data[++s.top] = n;
    }
}
int pop()
{
    if (s.top == -1)
    {
        return 0;
    }
    else
    {
        return s.data[s.top--];
    }
}
int main()
{   s.top=-1;
    char y;
    char infix[20];
    printf("ENTER THE INFIX EXPRESSION:\n");
    gets(infix);
    printf("INFIX=%s\n", infix);
    char postfix[20];
    int i = 0;
    int p = 0;
    while (infix[i] != '\0')
    {
         y = infix[i];
        if (y >= 'a' && y <= 'z' || y >= 'A' && y <= 'Z' || y >= '0' && y <= '9')
        {
            postfix[p] = y;
            p++;
        }
        else if(isempty()){
            push(y);
        }
        else if(y=='('){
            push(y);
        }
        else if(y==')'){
            while ((peep()!='(')&& !isempty()){
                y=pop();
                postfix[p++]=y;
            }
            y=pop();
        }
        else{
            while((!isempty())&&(peep()!='(')&&prcd(peep(),y)){
                char x=pop();
                postfix[p++]=x;
            }
            push(y);
        }
        i++;

        
    }
        while(!isempty()){
            y=pop();
            postfix[p++]=y;

        }
        postfix[p]='\0';
        printf("POSTFIX=%s",postfix);
    
}