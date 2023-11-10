#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Write data to the file
    file = fopen("DATA.txt", "w");
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter data to write to the file:\n");
    scanf("%s", data);
    fprintf(file, "%s", data);

    fclose(file);

    // Read data from the file and display it
    file = fopen("DATA.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("\nData read from the file:\n");
    fscanf(file, "%s", data);
    printf("%s\n", data);

    fclose(file);

    return 0;
}
