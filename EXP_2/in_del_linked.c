#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeg(int value) {

    // Create a new node
    struct Node *newNode = malloc(sizeof(struct Node));

    // Store data in new node
    newNode->data = value;

    // Make new node point to current head
    newNode->next = head;

    // Move head to new node
    head = newNode;
}

void insertEnd(int value) {

    // Create new node
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;   // Last node always points to NULL

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to last node
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Attach new node at end
    temp->next = newNode;
}

void deleteBeg() {

    // Check if list is empty
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Store current head in temp
    struct Node *temp = head;

    // Move head to next node
    head = head->next;

    // Free old first node
    free(temp);
}

void deleteEnd() {

    // If list is empty
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    // If only one node exists
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    // Traverse to second last node
    struct Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete last node
    free(temp->next);

    // Make second last node point to NULL
    temp->next = NULL;
}

void display() {

    struct Node *temp = head;

    // If list is empty
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    // Traverse and print each node
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    // Insert elements
    insertBeg(10);   // List: 10
    insertBeg(20);   // List: 20 -> 10
    insertEnd(30);   // List: 20 -> 10 -> 30

    printf("Linked List:\n");
    display();

    // Delete from beginning
    deleteBeg();     // Removes 20
    printf("After deleting from beginning:\n");
    display();

    // Delete from end
    deleteEnd();     // Removes 30
    printf("After deleting from end:\n");
    display();

    return 0;
}
