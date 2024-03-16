#include<stdio.h>
int main(){
    int i,j,n,sum=0;
    printf("enter the dimension of array: ");
    scanf("%d",&n);
    int aray[n][n];
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
        printf("enter the a[%d][%d] element: ",i,j);
        scanf("%d",&aray[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",aray[i][j]);  
            if(i==j){
                sum = sum+aray[i][j];
            } 
        }
        printf("\n");
    }
    // no need to add extra line 

    /* for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum = sum+aray[i][j];
            }
        }
    }*/
    printf("\nsum of the diagonal element is %d",sum);
    return 0;
}