#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n, i;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char **names = (char **)malloc(n * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        names[i] = (char *)malloc(50 * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        scanf("%s", names[i]);
    }

    qsort(names, n, sizeof(char *), compareNames);

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]);  // free allocated memory for each name
    }

    free(names);  // free the array of pointers

    return 0;
}
