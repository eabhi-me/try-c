#include<stdio.h>
#include<math.h> 
int main(){
    int num, originalNum, reminder, n, range;
    float result;

    printf("Enter the range integer: ");
    scanf("%d",&range);
    for(int i=0; i<=range;i++){
        n = 0;
        result = 0.0;
        num = i;
        originalNum = num;
        for (originalNum = num; originalNum !=0;++n){
            originalNum /= 10;
        }
        for (originalNum = num; originalNum != 0; originalNum/=10){
            reminder = originalNum % 10;

            result += pow(reminder , n);
        }
        if ((int)result == num){
            printf("%d is an armstrong number\n",num);
        }
        else if((int)result != num){
            continue;
        }
    }

    return 0;
}