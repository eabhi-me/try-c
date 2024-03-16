#include<stdio.h>
int main(){
    int array[]={4,5,8,9};
    printf("%d\n",array[0]);
    printf("%p\n",array);
    printf("%d\n",*array);
    printf("%d\n",*(array+1));
    printf("%d\n",*(array+3));
    *(array+4)=10;
    printf("%d\n",*(array+4));
    return 0;
}