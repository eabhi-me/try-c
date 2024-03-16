#include<stdio.h>
int main(){
    int n, gnum, lnum, sum=0;
    printf("Enter the length of 1D array: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    for(int i=0;i<n;i++){
        sum =sum+array[i];
    } 
    for(int j=1;j<=n;j++){
            gnum = array[0]; 
            if(array[0]<array[j]){
                array[0] = array[j];
            }
    }
    for(int k=1;k<=n;k++){
            lnum = array[0]; 
            if(array[k]<array[0]){
                array[0] = array[k];
            }
    }
    printf("\nthe gratest number in the element of 1D array is %d.",gnum);
    printf("\nthe smallest number in the element of 1D array is %d.",lnum);
    printf("\nthe sum of all element of 1D array is %d.",sum);
    printf("\nthe average of element of array is %f",(float)sum/n);
    return 0;
}