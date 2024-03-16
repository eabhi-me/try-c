#include<stdio.h>
int main()
{
    int a = 0, i = 0,b;
    for (i=0;i<10;i++)
    {
        
        a++;
        if (i==8)
        continue;
        printf("\n%d",i);
        
    
    }
    printf("\na=%d",a);
    return 0;
}