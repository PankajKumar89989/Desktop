#include<stdio.h>
struct student
{
    char name[20];
    char branch[7];
    char sec[1];
    int year;
    char grade;
};
int main()
{
   struct student stud[2];
   for(int i=0;i<2;i++)
   {
    printf("name:");
    gets(stud[i].name);

    printf("branch:");
    gets(stud[i].branch);

    printf("section:");
    scanf("%c",&stud[i].sec);
    fflush(stdin);
    printf("grade:");
    scanf("%c",&stud[i].grade);
    fflush(stdin)
    printf("year:");
    scanf("%d",&stud[i].year);
    fflush(stdin);
   }
   for(int i=0;i<2;i++)
   {
    printf("\n name:");
    puts(stud[i].name);
    printf("\n branch:");
    puts(stud[i].branch);
    printf("\n section:");
    printf("%c",stud[i].sec);
    printf("\n grade:");
    printf("%c",stud[i].grade);
    printf("\n year");
    printf("%d",stud[i].year);
   }
}
