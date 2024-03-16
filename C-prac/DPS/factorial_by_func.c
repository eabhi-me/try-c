#include<stdio.h>
long int facto(int);

void main(){
    int n;
    printf("enter the the value of n: ");
    scanf("%d",&n);
    long int res = facto(n);
    printf("the factorial of %d is %ld",n,res);
}

long int facto(int n){
    long int fact = 1;
    for(int i=1; i<=n ; i++){
        fact = fact*i;
    }
    return fact;
}

/*long int facto(int n){
    if(n>1){
        return n*facto(n-1);
    }
    else{
        return 1;
    }
}*/