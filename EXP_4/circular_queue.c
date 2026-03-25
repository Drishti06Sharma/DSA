//1.	Using array and functions implement Circular Queue data structure and its operations like insert, delete, and display.
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void enqueue(int x) {
    if((front == 0 && rear == MAX - 1) || (rear == front - 1)) {
        printf("Queue Overflow\n");
    }
    else if(front == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else if(rear == MAX - 1 && front != 0) {
        rear = 0;
        queue[rear] = x;
    }
    else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1) {
        printf("Queue Underflow\n");
    }
    else if(front == rear) {
        printf("%d deleted\n", queue[front]);
        front = rear = -1;
    }
    else if(front == MAX - 1) {
        printf("%d deleted\n", queue[front]);
        front = 0;
    }
    else {
        printf("%d deleted\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1) {
        printf("Queue is empty\n");
    }
    else if(front <= rear) {
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    else {
   
        for(int i = front; i < MAX; i++) {
            printf("%d ", queue[i]);
        }

        for(int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(55);
    enqueue(60);
    display();
    dequeue();
    display();
    enqueue(44);
    dequeue();
    display();
    return 0;
}
