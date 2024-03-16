#include <stdio.h>
int main() {
FILE * file_pointer;
char buffer[30], c;
file_pointer = fopen("fprintf_test.txt", "r");
printf("----read a line----\n");
fgets(buffer, 50, file_pointer); //fgets() function
printf("%s\n", buffer);
printf("----read and parse data----\n");
file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
char str1[10], str2[4], str3[20];
fscanf(file_pointer, "%s %s %s %s", str1, str2, str3); //fscanf() function
printf("Read String1 |%s|\n", str1);
printf("Read String2 |%s|\n", str2);
printf("Read String3 |%s|\n", str3);
printf("----read the entire file----\n");
file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
while ((c = getc(file_pointer)) != EOF) //fgetc() function
printf("%c", c);
fclose(file_pointer);
return 0; }