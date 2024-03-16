#include<stdio.h>
int main(){
    int num;
    printf("enter the + number: ");
    scanf("%d",&num);
    int array[num];
    array[0]=0;
    array[1]=1;
    for(int i=1; i<=num; i++){
        array[i+1]=array[i]+array[i-1];
    }
    for(int j=0; j<=num; j++){
        printf("%d\t",array[j]);
    }
    return 0;
}
