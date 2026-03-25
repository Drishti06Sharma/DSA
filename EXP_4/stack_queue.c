//2.	Using array and functions implement a Stack using Queues.

#include <stdio.h>
#define MAX 5

int q1[MAX], q2[MAX];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

void push(int x) {
    if(rear2 == MAX - 1) {
        printf("Overflow\n");
        return;
    }
    if(front2 == -1)
        front2 = 0;
    q2[++rear2] = x;

    while(front1 != -1 && front1 <= rear1) {
        q2[++rear2] = q1[front1++];
    }

    front1 = 0;
    rear1 = rear2;

    for(int i = 0; i <= rear2; i++) {
        q1[i] = q2[i];
    }

    front2 = rear2 = -1;
}

void pop() {
    if(front1 == -1 || front1 > rear1) {
        printf("Underflow\n");
    }
    else {
        printf("%d popped\n", q1[front1]);
        front1++;
    }
}

void display() {
    if(front1 == -1 || front1 > rear1) {
        printf("Stack empty\n");
    }
    else {
        for(int i = front1; i <= rear1; i++) {
            printf("%d ", q1[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}