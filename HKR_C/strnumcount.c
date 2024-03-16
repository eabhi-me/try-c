#include<stdio.h>
#include<string.h>

int main() {
    char array[50];
    scanf("%s", array);
    printf("%s\n", array);
    
    int count[10] = {0}; // Initialize count array with zeros
    
    for(int i = 0; i < strlen(array); i++) {
        if(array[i] >= '0' && array[i] <= '9') {
            count[array[i] - '0']++; // Increment count for the corresponding digit
        }
    }
    
    for(int i = 0; i < 10; i++) {
        printf("Frequency of digit %d: %d\n", i, count[i]);
    }
    return 0;
}
