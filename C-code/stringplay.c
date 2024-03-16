#include<stdio.h>
// to include string function
#include<string.h>
int main(){

    // one way of decleration 
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; i++) {
    printf("%c \t", carName[i]);
    }

    // one way of decleration
    char myChar[] = "Hello this is a string. \nWelcome to our world, \nHere we will play with srting.";
    // to print indexed character
    printf("\n%c",myChar[4]);
    
    // to print whole string
    printf("\n%s",myChar);

    // one way of deceleration
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("\n\n%s\n", greetings);
     // 0/ means end of statement of array


    // new code here
    printf("different code\n\n");
    char str1[]="HI";
    char str2[]="HI";
    char str3[]="Hello";
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%d\n",strlen(str1));
    printf("%d\n",strcmp(str1,str2));
    int srtcompare = strcmp(str1,str2);
    if (srtcompare==0){
        printf("\nboth string is same");
    }
    else{
        printf("\nboth string is not same");
    }
    // concat of string
    strcat(str2,str3); // this will store srt1+str2 in str2
    printf("\n%s",str2);
    printf("\n%s",str3);
    strcpy(str3,str2);
    printf("\n%s",str1);
    printf("\n%s",str2);
    printf("\n%s",str3);
return 0;
}