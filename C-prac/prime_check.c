#include<stdio.h>
int main(){
    int i=2, num , get=0;
    printf("TO CHECK THAT GIVEN NUMBER IS PRIME OR NOT.\n");
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i;i<num/2;i++){
        if(num%i==0){
            get=1;
            break;
        }
    }
    if (get==1){
        printf("%d is not a prime nmber.",num);
    }else{
        printf("%d is a prime number",num);
    }
return 0;    
}