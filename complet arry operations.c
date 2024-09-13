#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

int arr[MAXSIZE];
int size = 0;

void display() {
    if (size == 0) {
        printf("Array is empty\n");
    } else {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void insertAtPosition(int position, int element) {
    if (position < 0 || position > size || size == MAXSIZE) {
        printf("Invalid position or array is full\n");
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

void deleteAtPosition(int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    while (1) {
        printf("1. Insert End\n");
        printf("2. Insert Specified Position\n");
        printf("3. Delete Specified Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        int choice, position, element;
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size == MAXSIZE) {
                    printf("Array is full\n");
                } else {
                    printf("Enter the element to be inserted: ");
                    scanf("%d", &element);
                    arr[size] = element;
                    size++;
                }
                break;

            case 2:
                if (size == MAXSIZE) {
                    printf("Array is full\n");
                } else {
                    printf("Enter the position: ");
                    scanf("%d", &position);
                    if (position < 0 || position > size) {
                        printf("Invalid position\n");
                        break;
                    }
                    printf("Enter the element to be inserted: ");
                    scanf("%d", &element);
                    insertAtPosition(position, element);
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is empty\n");
                } else {
                    printf("Enter the position to delete: ");
                    scanf("%d", &position);
                    deleteAtPosition(position);
                }
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
