#include<stdio.h>
int main(){
    int i,j,row,col;
    printf("enter the two num of lenght of array ");
    scanf("%d%d",&row,&col);
    int arry[row][col];
    for (i=0;i<row;i++){
         for (int j=0;j<col;j++){
        printf("enter the element of row[%d],col[%d]: ",i,j);
        scanf("%d",&arry[i][j]);
        }
    }
    for (int i=0;i<row;i++){
        printf("\n");
        for(j=0;j<col;j++){
            printf("%d\t",arry[i][j]);
        }
    }
    printf("\n\nwant more detail enter 0 for no and 1 for yes: ");
    int responce;
    scanf("%d",&responce);
    if (responce==1){
        if(row==col){
        printf("\nthe determinant of matrix is possible as it is square matrix");
        } else{
        printf("\n it is not square matrix");}
     
    } else{
        printf("ok thanks");
    }
    int gt1=0;
    for(int k=0; k<row; k++){
        for(int l=0; l<col; l++){
            if(arry[i][j]!=arry[j][i]){
                gt1 = 1;
            }
        }
    }
    if(gt1=1){
        printf("\nsymmetric matrix");
    }
    else{
        printf("\nnot symmetric matrix");
    }
    return 0;
}