#include<stdio.h>
void main(){
    int x=1;
    REPEAT:
    if(!(x%2))
    {
    printf("%d  ",x);}
    x++;
    if(x<=100)
    goto REPEAT;
}