#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("the value of a and b is a=%d and b=%d: ",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("ater swap\n");
    printf("the value of a=%d and b=%d",a,b);
    return 0;
}