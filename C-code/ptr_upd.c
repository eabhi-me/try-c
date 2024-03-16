#include<stdio.h>
int main(){
    int a = 3;
    int* pt = &a;
    printf("the stored value of a %d\n",a);
    printf("the stored value value of a in unsigned format %u\n",a);
    printf("the adress of a in unsinged format %u\n",&a);
    printf("the pointer print using deference %p\n",*pt);
    printf("the integer value of pointer %d\n",pt);
    printf("the interger value of pointer in using deference %d\n",*pt);
    printf("the pointer print of pointer with refrence %p\n",pt);

    return 0;
}