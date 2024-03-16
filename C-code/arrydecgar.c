#include<stdio.h>
int main(){
// arry declare
int myNumbers[] = {25, 50, 75, 100};
int k;
// loop for print
for (k = 0; k < 10; k++) {
  // as iteration is larger than list so garbeg value take
  printf("%d\n", myNumbers[k]);
}
printf("\n\n\n different\n");
// different  ways 
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}
return 0;
}
