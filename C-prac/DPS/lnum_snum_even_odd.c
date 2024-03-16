// incomplete as it some error in even odd case. 
#include<stdio.h>
int main(){
    int n, gnum, lnum, even, odd;
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
    // number of even number
    even = 0;
    odd = 0;
    for(int i=0; i<n; i++){
        if(array[i]%2==1){
            odd++;
        }
    }

    for(int i=0; i<n; i++){ 
        if(array[i]%2==0){
            even++;
        }
    }
    
    printf("\nthe gratest number in the element of 1D array is %d.",gnum);
    printf("\nthe smallest number in the element of 1D array is %d.",lnum);
    printf("\nthe count of even is %d",even);
    printf("\nthe count of odd is %d",odd);
    return 0;
}