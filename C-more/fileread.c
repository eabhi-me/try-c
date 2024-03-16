#include<stdio.h>
#include<string.h>
int main(){
    FILE *ftp;
    ftp = fopen("filehi.txt","r");
    char store[10];
    if(ftp != NULL){
    while (fgets(store, 10, ftp)){
        printf("%s",store);
    }
    } else{
        printf("this file is acutally empty");
    }
    fclose(ftp);
}