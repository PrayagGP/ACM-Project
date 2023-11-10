#include <stdio.h>

int findMax(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int maxInRest = findMax(arr + 1, size - 1);
        return (arr[0] > maxInRest) ? arr[0] : maxInRest;
    }
}

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    int arr[size];
    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++)
        scanf_s("%d", &arr[i]);

    printf("The largest number in the array is: %d\n", findMax(arr, size));

    return 0;
}
