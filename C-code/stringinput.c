#include<stdio.h>
#include<string.h>
int main(){

// why cannot use both scanf and fgets same time?

// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
// scanf("%s", firstName);  // we not use & before firstname
fgets(firstName,sizeof(firstName),stdin);

// Output the text
printf("Hello %s", firstName);
printf("\n%d",sizeof(firstName));
printf("\n%d",strlen(firstName));
return 0;
}