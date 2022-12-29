#include<stdio.h>
#define SIZE 10
struct stack
{
    int data[SIZE];
    int top;
    //default value garbage
};
struct stack init (struct stack st) {
    st.top=-1;
    return st;
}
struct stack push(struct stack st){
    int item;
    if(st.top==(SIZE-1)){
    printf("overflow");}


else{
    printf("Enter item to insert:");
    scanf("%d",&item);
    st.top=st.top+1;
    st.data[st.top]=item;
    printf("item inserted\n");

}}
 void show(struct stack st){
    int i;
    if(st.top==-1){
        printf("stack empty");
    }else{
        printf("stack items are:\n");
        for(i=st.top;i>=0;i--){
            printf("%d\n",st.data[i]);
        }
    }
    printf("\n");
}
int main(){
    struct stack s;
    s=init(s);
    show(s);
    s=push(s);
    s=push(s);
    s=push(s);
    s=push(s);
    s=push(s);
    shows(s);
}


//struct stack init(struct stack st){
   // st.top =-1;
   // return st;
//}

//void init(struct stack s){
   // s.top=-1;


//
//int main(){
    //struct stack s;
   // for(int i=0; i<SIZE; i++){
   // printf("%d\t",s.data[i]);
   // }
   //struct stack s;
  // init(s);
  //s= init(s);
   //printf("top=%d",s.top);
//}