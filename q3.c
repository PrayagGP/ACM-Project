#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    char address[100];
    char phoneNumber[15];
};

void searchByName(struct Person people[], int size, char searchName[]) {
    int i;
    for (i = 0; i < size; i++) {
        if (strcmp(people[i].name, searchName) == 0) {
            printf("Information found!\nName: %s\nAddress: %s\nPhone Number: %s\n", 
                   people[i].name, people[i].address, people[i].phoneNumber);
            return;
        }
    }
    printf("Person with name '%s' not found.\n", searchName);
}

void searchByPhoneNumber(struct Person people[], int size, char searchPhoneNumber[]) {
    int i;
    for (i = 0; i < size; i++) {
        if (strcmp(people[i].phoneNumber, searchPhoneNumber) == 0) {
            printf("Information found!\nName: %s\nAddress: %s\nPhone Number: %s\n", 
                   people[i].name, people[i].address, people[i].phoneNumber);
            return;
        }
    }
    printf("Person with phone number '%s' not found.\n", searchPhoneNumber);
}

int main() {
    struct Person people[5];
    int i;

    printf("Enter information for 5 people:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        scanf_s("%s", people[i].name);
        printf("Address: ");
        scanf_s("%s", people[i].address);
        printf("Phone Number: ");
        scanf_s("%s", people[i].phoneNumber);
    }

    char searchName[50];
    printf("Enter name to search: ");
    scanf_s("%s", searchName);
    searchByName(people, 5, searchName);

    char searchPhoneNumber[15];
    printf("Enter phone number to search: ");
    scanf_s("%s", searchPhoneNumber);
    searchByPhoneNumber(people, 5, searchPhoneNumber);

    return 0;
}
