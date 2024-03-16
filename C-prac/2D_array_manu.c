// 2D Array added manually

#include<stdio.h>
int main(){
    printf("The 2D array matrix.\n");
    int array[2][2]= {{3,5},{1,4}};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}