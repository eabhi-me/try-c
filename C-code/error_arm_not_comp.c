// error not complete 




// okk sure...............


#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int arm[40];
    int sum = 0, dgt;
    printf("TO FIND GIVEN NUMBER IS ARMSTRONG OR NOT.");
    printf("\nenter the number of digit in number: ");
    scanf("%d",&dgt);
    for (int j=0; j<dgt; j++){
        printf("entr the %d digit: ",arm[j]);
        scanf("%d",&arm[j]);
    }
    // int len = sizeof(arm);
    // printf("%d",len);
    int itarm = (int)arm ;
    for(int i = 0; i<dgt; i++){
        printf("%d\n",arm[i]);
        sum += pow((int)arm[i],dgt);
    }
    if(itarm == sum){
        printf("%d is a armstrong number.",arm);
    } else{
        printf("%d is not a armstrong number.",arm);
    }
    printf("\n%d",sum);
return 0;    
}