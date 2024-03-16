#include<stdio.h>
int main(){
    FILE *ftp;
    ftp = fopen("filehi.txt","a");
    fprintf(ftp, "\nrecommand");
    fprintf(ftp,"\nnew line added \nhi hello\nnew content");
    fprintf(ftp,"\ngo went gone");
    fprintf(ftp,"\nhello hello hello");
    fclose(ftp);
    return 0;
}