#include<stdio.h>
int main(){
    int n, gnum, lnum;
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
    for(int x=0; x<n; x++){
        int even=0;
        int odd=0;
        if(array[x]%2==0){
            int even +=1;
        }
        else{
            int odd +=1;
        }
    }
    printf("\nthe gratest number in the element of 1D array is %d.",gnum);
    printf("\nthe smallest number in the element of 1D array is %d.",lnum);
    printf("\nthe count of even is %d",even);
    printf("\nthe count of odd is %d",odd);
    return 0;
}