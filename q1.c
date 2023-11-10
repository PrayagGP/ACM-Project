#include <stdio.h>
#include <string.h>

void findLength(char *str) {
    printf("Length of the string: %lu\n", strlen(str));
}

void copyString(char *source, char *destination) {
    strcpy(destination, source);
    printf("String copied successfully.\n");
}

void compareStrings(char *str1, char *str2) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically greater than String 2.\n");
    }
}

int main() {
    char str1[100], str2[100], copiedString[100];
    int choice;

    printf("Enter String 1: ");
    scanf("%s", str1);

    printf("Enter String 2: ");
    scanf("%s", str2);

    printf("\nMenu:\n");
    printf("1. Find length of a string.\n");
    printf("2. Copy a string to the other.\n");
    printf("3. Compare two strings.\n");

    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            findLength(str1);
            break;

        case 2:
            copyString(str1, copiedString);
            printf("Copied String: %s\n", copiedString);
            break;

        case 3:
            compareStrings(str1, str2);
            break;

        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}
