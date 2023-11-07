#include <stdio.h>

int main() {
    char heart = 3;
    char diamond = 4;
    int symbols_to_print;

    printf("Enter the number of symbols to print: ");
    scanf("%d", &symbols_to_print);

    for (int i = 0; i < symbols_to_print; i++) {
        if (i % 2 == 0) {
            putchar(heart);
        } else {
            putchar(diamond);
        }
    }

    printf("\n");

    return 0;
}
