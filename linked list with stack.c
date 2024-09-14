#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (!node) {
        printf("Memory allocation error\n");
        return NULL;
    }
    node->data = data;
    node->next = NULL;
    return node;
}

void push(struct Node** top, int data) {
    struct Node* node = newNode(data);
    if (!node) {
        return;
    }
    node->next = *top;
    *top = node;
    printf("%d pushed onto the stack\n", data);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = temp->next;
    free(temp);
    return poppedValue;
}

int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return top->data;
}

int beginning(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    struct Node* current = top;
    while (current->next != NULL) {
        current = current->next;
    }
    return current->data;
}

int main() {
    struct Node* top = NULL;
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);

    printf("Top element: %d\n", peek(top));
    printf("Bottom element is %d\n", beginning(top));

    printf("Popped element is %d\n", pop(&top));
    printf("Popped element is %d\n", pop(&top));

    printf("Top element after popping is %d\n", peek(top));

    // Free remaining nodes in the stack
    while (top != NULL) {
        pop(&top);
    }

    return 0;
}
