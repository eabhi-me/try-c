// reverse of the number or string ....
// hi welcome

#include<stdio.h>
#include<string.h> // using the string function..

int main(){
    char num[30];
    printf("enter the number or string: ");
    scanf("%s",&num);
    int x = strlen(num)-1;
    printf("the reverse of number or string  is: ");
    //  loop to reverse..
    for(int i=x; i>=0; i--){
        printf("%c",num[i]);
    }
    return 0;
}