
#include <stdio.h>
#include <string.h>

int main() {

    // for using switch case in character
    
   /* char choice[10];

    printf("Enter a choice (A, B, or C): ");
    scanf("%s", choice);

    if (strcmp(choice, "A") == 0) {
        printf("You chose A.\n");
    } else if (strcmp(choice, "B") == 0) {
        printf("You chose B.\n");
    } else if (strcmp(choice, "C") == 0) {
        printf("You chose C.\n");
    } else {
        printf("Invalid choice.\n");
    }
    */
 // for using switch case in number
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You entered 1.\n");
            break;
        case 2:
            printf("You entered 2.\n");
            break;
        case 3:
            printf("You entered 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
