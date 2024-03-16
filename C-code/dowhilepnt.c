#include<stdio.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    do{
        printf("%d\n",num);
        num++;
    }
    while(num<150);
    printf("end of code above");
    do{
        printf("%d\n",num);
        num--;
    }
    while(num>0);
    
return 0;
}