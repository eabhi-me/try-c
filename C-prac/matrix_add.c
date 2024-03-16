// matrix addition
// incomplete..........................

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the dimension of array: ");
    scanf("%d",&n);
    int aray1[n][n],aray2[n][n];
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
        printf("enter the a[%d][%d] element: ",i,j);
        scanf("%d",&aray1[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",aray1[i][j]);  
        }
        printf("\n");
    }
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
        printf("enter the a[%d][%d] element: ",i,j);
        scanf("%d",&aray2[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",aray2[i][j]);  
            } 
        }
        printf("\n"); 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
        }
    } 
    return 0;
}