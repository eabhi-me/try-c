#include<stdio.h>
int main(){
    int array[3]= {2,3,4};
    printf("Already declared 1D aray.\n");
    for(int i=0; i<3; i++){
        printf("%d\t",array[i]);
    }
    return 0;
}