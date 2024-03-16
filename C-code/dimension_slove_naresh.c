// hello dosto by abhi
#include<stdio.h>
#include<math.h>
int main ()
{
int n; 
float s1=1189,s2=841;
printf("enter the value of n according to size of paper e.g., An ");
scanf("%d",&n);
    if(n==0){
        s1=s1*1;
        s2=s2*1;
    }
    else if(n%2!=0){
        s1=1189/(pow(2,n));
        s2=841/(pow(2,n-1));
    }
    else
    {
        s1=1189/(pow(2,n-1));
        s2= 841/(pow(2,n));
    }
    printf("the dimension of A%d is %fmm x %fmm",n,s1,s2);
}