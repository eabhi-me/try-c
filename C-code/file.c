#include<stdio.h>
void main(){
    FILE *file;
    /* file = fopen("mytxt.txt","w");
    fclose(file); */
    file = fopen("file.txt","w");
    fprintf(file,"he this is first line \nthis is second line.");
    fclose(file);
    fopen("file.txt","r");

}