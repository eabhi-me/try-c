#include<stdio.h>
int main(){
    int myAge = 10;
    char myName[] = "hello";
    printf("%p\n",myAge);
    printf("%p",myName);

    int* pointer = &myAge;
    printf("\n%u",pointer);
    printf("\n%d",*pointer);
    printf("\n%p",pointer);
    printf("\n%p",*pointer); 

    char *ptr2 = "hello";
    printf("\n%d",*ptr2);
    printf("\n%s",ptr2);
    printf("\n%p",ptr2);

return  0;
}