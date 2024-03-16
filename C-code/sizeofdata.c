#include<stdio.h>
#include<stdbool.h>
// data type decleration

int main(){
// data type
int myInt;
int mylongInt;
float myFloat;
float mylongFloat;
double myDouble;
long double mylongDouble;
char myChar;
bool myBool;

printf("%lu size of Int\n", sizeof(myInt));
printf("%lu size of long int\n", sizeof(mylongInt));
printf("%lu size of float\n", sizeof(myFloat));
printf("%lu size of long float\n", sizeof(mylongFloat));
printf("%lu size of double\n", sizeof(myDouble));
printf("%lu size of long double\n", sizeof(mylongDouble));
printf("%lu size of char\n", sizeof(myChar));
printf("%lu size of bool\n", sizeof(myBool));

return 0;
}