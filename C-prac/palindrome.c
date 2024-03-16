#include<stdio.h>
#include<string.h>
int main(){
    char checkp[40];
    int i=0, got;
    printf("enter the word: ");
    scanf("%s",&checkp);
    int len = strlen(checkp);
    for(i;i<(len/2);i++){
        if (checkp[i] != checkp[len-i-1]){
            got = 1;
            break;
        }
    }
    if (got==1){
        printf("%s is a not palindrone",checkp);
    } else{
        printf("%s is palindrone",checkp);
    }  
return 0;
}