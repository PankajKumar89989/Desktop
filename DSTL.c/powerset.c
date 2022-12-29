#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,arr[50],c,j;
    printf("Enter size of the set: ");
     scanf("%d",&m);
     for(i=0;i<m;i++)
     {
         printf("Element %d: ",i+1);
         scanf("%d",&arr[i]);
     }
     printf("\nA={");
     for(i=0;i<m;i++)
     {
         printf("%d, ",arr[i]);
     }
     printf("\b\b}\n");
     c= pow(2,m);
     printf("P(A)= {");
     printf("{");
     for(i=0;i<c;i++)
     {
        printf("c{");
         for(j=0;j<m;j++)
         {
             if((i&(1<<j))>0)
                printf("%d,",arr[j]);
         }

         printf("\b}");
         printf(",");
       }
       printf("\b}");
       printf("\nn(P(A))= %d",c);
       printf("\n Pankaj Kumar \n");
       printf("\n 2100320120122 \n");
} 