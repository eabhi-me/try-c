#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    printf("enter the number of the numbers: ");
    scanf("%d",&n);
    int numlst[n];
    int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    c0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
    printf("enter the numbers by space: ");
    for(int i=0; i<n; i++){
         scanf("%d",&numlst[i]);
    }
    for(int i=0; i<n; i++){
        if(numlst[i]==0){
            c0+=1;
         }
         else if(numlst[i]==1){
            c1+=1;
         }
         else if(numlst[i]==2){
            c2+=1;
         }
         else if(numlst[i]==3){
            c3+=1;
         }
         else if(numlst[i]==4){
            c4+=1;
         }
         else if(numlst[i]==5){
            c5+=1;
         }
         else if(numlst[i]==6){
            c6+=1;
         }
         else if(numlst[i]==7){
            c7+=1;
         }
         else if(numlst[i]==8){
            c8+=1;
         }
         else if(numlst[i]==9){
            c9+=1;
         }
    }
    
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    return 0;
}
