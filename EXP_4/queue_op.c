//1.	Using array and functions implement Queue data structure and its operations like insert, delete, and display.

# include <stdio.h>
# define MAX 50
int queue[MAX];
int front=-1,rear=-1;

void enqueue(int x){
    if(rear==MAX-1){
        printf("Queue is full\n");
    }
    else{
        if (front==-1){
            front=0;
        }
    rear++;
    queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("queue is empty\n");
    }
    else{
        printf("\n %d deleted.\n",queue[front]);
        front++;
    }
}

void display(){
    if (front==-1 ||front>rear){
        printf("Queue is empty");
    }
    else{
        printf("Elements: \n");
        for(int i=front;i<rear+1;i++){
            printf(" %d ",queue[i]);
        }
        printf("\n");

    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}