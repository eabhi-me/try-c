#include<stdio.h>
#include<math.h>
int main(){
    char hi[40]="46";
    printf("%s\n",hi);
    int x = (int)hi;
    printf("%lu\n", sizeof(x));
    printf("%c\n",hi[0]);
    printf("%d\n",sizeof((int)hi[0]));
    printf("%c\n",(int)hi[1]);
    printf("%lu\n",sizeof(hi[0]));
    printf("%f\n",(int)pow((int)hi[1],2));
    printf("%d\n",(int)pow(x,2));
    return 0;
}