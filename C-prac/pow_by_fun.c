#include<stdio.h>
int power(int,int);
int main(){
    int a,b;
    printf("enter the two number a to pore b: ");
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
int power(int a, int b){
    int res=1;
    for(int i=b; i>0; i--){
        res=res*a;
    }
    return res;
}