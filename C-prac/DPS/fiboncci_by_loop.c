// fiboncci by efficient method .......
// with loop only
#include<stdio.h>
int main(){
    int i, n ;
    int t1 = 0, t2=1;
    int nxt = t1+t2;
    printf("enter the number of digit to print: ");
    scanf("%d",&n);
    printf("%d\t%d",t1,t2);
    for(i=3; i<=n; i++){
        printf("\t%d",nxt);
        t1=t2;
        t2=nxt;
        nxt=t1+t2;
    }
    return 0;

}