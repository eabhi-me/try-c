#include<stdio.h>
int main(){
    // define dimension
    int r,c;
    printf("Enter the Dimension of Matrix: ");
    scanf("%d %d",&r,&c);
    // initilasion of m1
    int array1[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter the a[%d][%d]): ",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    // printf matrix 1
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the matrix 2\n");
    // matrix 2
    int array2[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter the a[%d][%d]): ",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    // printf matrix 2
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }

    // substract of matrix
    printf("\nthe sum of two matrix is.\n");
    int subMat[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            subMat[i][j]=array1[i][j]-array2[i][j];
        }
    }
    // printf minus of matrix

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",subMat[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}