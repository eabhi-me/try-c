#include<stdio.h>
int main(){
    int x,y;
    x = 4;
    y = 5;
    for(int i=0;i<=x;i++){
        for(int j=0; j<=y; j++){
            if(i==j){
                continue;
            }
            else{
                printf("%d\t",x&y);
                printf("%d\t",x|y);
                printf("%d\t",x^y);
                printf("\n");
            }
        }
    }
   
    return 0;
}