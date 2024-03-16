#include<math.h> 
#include<stdio.h>

int main(){
    int num, originalNum, reminder, n, range;
    float result;

    printf("Enter the range integer: ");
    scanf("%d",&range);
    for(int i=0; i<=range;i++){
        num = i;
        originalNum = num;
        n = 0;
        result = 0.0;
        while (originalNum !=0){
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0){
            reminder = originalNum % 10;
            result += pow(reminder , n);
            originalNum /= 10;
        }
        if(result == num)
            printf("%d is an Armstrong number.\n", num);
    }
    return 0;
}