#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;   // top of stack

// Push operation (Insert)
void push(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d\n", val);
}

// Pop operation (Delete)
void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node* temp = top;
    printf("Popped %d\n", temp->data);
    top = top->next;
    free(temp);
}

// Display stack
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct Node* temp = top;
    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main function (menu-driven)
int main() {
    int choice, val;

    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &val);
                push(val);
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
                printf("Invalid choice\n");
        }
    }
}
