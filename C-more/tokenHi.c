#include<stdio.h>
#include<string.h>

int main(){

    char format[100];
    scanf("%s", format);
    int i=0, flag=0;
    while (format[i]){
            if(format[i]=='&'){
                flag = 1;
            }
        i++;
    }
    if(flag==1)
    printf("The Token is valid");
    else
    printf("The Token is invalid");
    return 0;
}
