#include<stdio.h>
int a;
int funsay(int a);
int main(){
    printf("enter a num ");
    scanf("%d",&a);
    funsay(a);
    funsay(a);
    return 0;
}
funsay(int x){
    
    for(int i=1;i<=x;i++){
        printf("%d time hello\n",i);
    }
    return 0;
}
