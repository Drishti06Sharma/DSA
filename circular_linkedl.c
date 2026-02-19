#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Insert at beginning */
void insert_begin(int item) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    newNode->data = item;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

/* Insert at end */
void insert_end(int item) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    newNode->data = item;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

/* Delete from beginning */
void delete_begin() {
    struct node *temp = head;
    struct node *last;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->next == head) {
        free(head);
        head = NULL;
        return;
    }
    last = head;
    while (last->next != head)
        last = last->next;

    head = head->next;
    last->next = head;
    free(temp);
}

/* Display */
void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    insert_begin(10);
    insert_end(20);
    insert_end(30);
    display();
    delete_begin();
    display();
    return 0;
}
