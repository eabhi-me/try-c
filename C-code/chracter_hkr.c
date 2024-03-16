#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100];
    char scn[100];
    scanf("%c",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c",scn);
    // fflush(stdin);
    // fgets(scn,sizeof(scn),stdin);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",scn);
       
    return 0;
}