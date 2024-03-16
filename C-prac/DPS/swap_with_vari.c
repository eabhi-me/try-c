#include<stdio.h>
int main(){
    int a = 5;
    int b = 10;
    int c;
    printf("a=%d and b=%d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nafter the swap.\n");
    printf("a=%d and b=%d",a,b);
}