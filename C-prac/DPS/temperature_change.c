#include<stdio.h>
float main(){
    float temp;
    printf("enter the temp in celcius: ");
    scanf("%f",&temp);
    float fheat = ((temp*9)/5)+32;
    printf("temp in farenheat is %f",fheat);
    return 0;
}