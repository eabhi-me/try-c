#include<stdio.h>
int main(){
    // define dimension
    int r,c,c2;
    printf("Enter the Dimension of Matrix in 3 num as r,c,c2: ");
    scanf("%d %d %d",&r,&c,&c2);
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
    int array2[c][c2];
    for(int i=0; i<c; i++){
        for(int j=0; j<c2; j++){
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

    // product of matrix
    printf("\nthe product of two matrix is.\n");
    int mulMat[r][c2];
    // find the greatest
    /*int lcr;
    if(r>c2){
        lcr = r;
    } else{
        lcr = c2;
    } */
    for(int i=0; i<r; i++){
        for(int j=0; j<c2; j++){
            mulMat[i][j]=0;
            for(int k=0; k<c; k++){
                mulMat[i][j] += array1[i][k]*array2[k][j];
            }    
        }
    }
    // printf product of matrix

    for(int i=0; i<r; i++){
        for(int j=0; j<c2; j++){
            printf("%d\t",mulMat[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}