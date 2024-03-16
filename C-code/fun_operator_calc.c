#include<stdio.h>
#include<string.h>
float operator(float a, float b);
float a,b;
char oper[4];
int main(){
    printf("enter the value of a and b: ");
    scanf("%f%f",&a,&b);
    printf("enter the operator: ");
    scanf("%s",&oper);
    printf("the result of %f %s %f is %f",a,oper,b,operator(a,b));
    return 0;
}
float operator(float a,float b){
    if(strcmp(oper,"+")==0){
        return a+b;
    }
    else if(strcmp(oper,"-")==0){
        return a-b;
    }
    else if(strcmp(oper,"*")==0){
        return a*b;
    }
    else if(strcmp(oper,"/")==0){
        return a/b;
    }
    else {
        return 0;
    }
}