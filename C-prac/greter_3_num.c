#include<stdio.h>
int main(){
    printf("TO CHECK THE GREATEST OF THREE NUMBER.\n");
    printf("enter the 3 number: ");
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3){
        printf("%d is the greatest number.",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the greatest number.",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("%d is the greatest number.",num3);
    }
return 0;
}