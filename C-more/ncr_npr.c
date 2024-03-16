// to calculate permutation and comabination
#include<stdio.h>
int nCrCalc(int, int);
int nPrCalc(int, int);
int fac(int);
int main(){
    int n,r;
    printf("enter the n and r: ");
    scanf("%d %d",&n,&r);
    printf("The %dP%d is %d\n",n,r,nPrCalc(n,r));
    printf("The %dC%d is %d",n,r,nCrCalc(n,r));
    return 0;
}
int nPrCalc(int n, int r){
    int nfac = fac(n);
    int nrfac = fac(n-r);
    int res = (nfac)/(nrfac);
    return res;
}
int nCrCalc(int n, int r){
    int nfac = fac(n);
    int rfac = fac(r);
    int nrfac = fac(n-r);
    int res = (nfac)/(rfac*nrfac);
    return res;
}
int fac(int x){
    int fact = 1;
    for(int i=1; i<=x ; i++){
        fact = fact*i;
    }
    return fact;
}