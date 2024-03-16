#include <stdio.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowelCount = 0;

    // Get the file name from the user
    printf("Enter the file name with proper directory path: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file character by character and count vowels
    while ((ch = fgetc(file)) != EOF) {
        if (isVowel(ch)) {
            vowelCount++;
        }
    }

    // Close the file
    fclose(file);

    // Print the result
    printf("Number of vowels in the file: %d\n", vowelCount);

    return 0;
}
