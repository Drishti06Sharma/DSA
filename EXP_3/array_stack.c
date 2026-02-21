#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Function to insert (Push)
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot insert %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d inserted into stack.\n", value);
    }
}

// Function to delete (Pop)
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        printf("%d deleted from stack.\n", stack[top]);
        top--;
    }
}

// Function to display stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Insert (Push)\n");
        printf("2. Delete (Pop)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
