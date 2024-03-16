#include<stdio.h>
#include<string.h>
int a,b;
char operator[30];
int add(int a,int b);
int sub(int a,int b);
int main(){
    printf("enter the number a and b: ");
    scanf("%d%d",&a,&b);
    printf("enter the operator: ");
    scanf("%s",&operator);
    int opa = strcmp(operator,"+");
    int ops = strcmp(operator,"-");
    if(opa==0){
        printf("%d",add(a,b));
    }
    else if(ops==0){
        printf("%d",sub(a,b));
    }
    else
    {
        printf("the given operator in not defined");
    }
    // printf("%d",add(a,b));
    /* int p = add(a,b);
    printf("%d",p);   */
    return 0;
}
int add(int a,int b){
    int sum = a+b;
    return sum;
}
int sub(int a,int b){
    int res = a-b;
    return res;
}