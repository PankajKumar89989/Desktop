// #include<stdio.h>
// int main(){
//     int Bsearch(int arr[],int s,int key);
//     int low=0;
//     int high= s-1;
//     int mid;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==key)
//         return 1;
//         else if(arr[mid]>key)


//     }
#include<stdio.h>
void  main(){
    int n,i,max;
    printf("Name:PANKAJ KUMAR\n");
    printf("Roll no.:2100320120122\n");
    printf("Sec:B\n");
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++) {
       if(max<a[i]) {
           max=a[i]; } }
    printf("max value is:%d\n",max);
    int c[max+1]={0};
    for(i=0;i<n;i++)
        c[a[i]]++;
    for(i=0;i<=max;i++){
    if(c[i]==1)
        printf("%d is not repeated\n",i);
    if(c[i]>1)
        printf("%d is repeated %d times\n",i,c[i]);}
}
