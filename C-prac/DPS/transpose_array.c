#include<stdio.h>
int main(){
    int r,c; // taking row and cloumn
    printf("enter the value of row and column: ");
    scanf("%d %d",&r,&c);
    int array[r][c];  // declaring array
    // take element of array
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter the element a[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    } 
    // for printing the array
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    // logic to reverse
    if(r==c){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                array[i][j]=array[j][i];
            }
        }
        // printing the reverse
        printf("The transpose of the matrix is.\n");
        for (int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                printf("%d\t",array[i][j]);
        }
        printf("\n");
        }
    }
    else{
        printf("the transpose of matrix dose not exist.");
    }
    return 0;
}