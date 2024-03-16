#include<stdio.h>
int main(){
    int n;
    printf("enter the index of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the array's element:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("printing the element: ");
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("\t");
        printf("%d",array[i]);
    }
return 0;
}