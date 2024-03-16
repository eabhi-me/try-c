#include<stdio.h>
int power(int,int);
int main(){
    int a,b;
    printf("enter the two num: ");
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
}
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b!=0){
        int res = 1;
        for(int i=b; i>0; i--){
            res = res*a;
        }
        return res;
    }
}