#include<stdio.h>
int main()
{
int n, sum=0;
printf("enter the length of 1D array");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n ; i++){
    printf("enter the number arr[%d]: ",i);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("\narr[%d] element is: %d",i,arr[i]);
    sum = sum + arr[i];
}

printf("\nThe sum of element is %d",sum);
return 0;
}