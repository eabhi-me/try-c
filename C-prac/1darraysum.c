#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the length of 1D array: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
        sum =sum+array[i];
    }
    printf("\nthe sum of all element of 1D array is %d.",sum);
}