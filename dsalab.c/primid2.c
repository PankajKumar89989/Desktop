#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int perfect(int n)
{
    int i,s=0,zz=n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            s+=i;
        
}
    if(s==zz)
        return 1;
    else return 0;
}

    

int main() {
    int n;

   scanf("%d",&n);
    int k=perfect(n);
    if(k==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}