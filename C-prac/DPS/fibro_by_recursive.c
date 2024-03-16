#include<stdio.h>
int fibo(int);
int main(){
    printf("enter the range: ");
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
    printf("%d\t",fibo(i));
    }
}
int fibo(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return(fibo(num-1)+fibo(num-2));
    }
}