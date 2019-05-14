#include <stdio.h>

#define MAX 25

int queue[MAX];
int front = -1;
int rear = -1;

void main() {
    int choice;
    while(1) {
        printf("Choose an option:\n\n");
        printf("1. Insert item into queue");
        printf("2. Remove item from queue");
        printf("3. Display queue");
        scanf("%d", &choice);
        if(choice == 1) {
            insert();
        } else if (choice == 2) {
            remove();
        } else if (choice == 3) {
            show();
        } else {
            printf("Invalid option\n");
        }
    }
}

void insert() {
    int item;
    if(rear == MAX - 1) {
        printf("Overflow");
        return;
    } else {
        if(front == -1)
        front = 0;
        printf("Enter an integer to insert into the queue:");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void remove() {
    if(front == -1) {
        printf("Underflow");
        return;
    } else {
        printf("Element %d has been removed from the queue", queue[front]);
        front = front + 1;
    }
}

void show() {
    int i;
    if (front == - 1) {
        printf("Queue empty");
    } else {
        for(i = front; i <= rear; i++) {
            printf("%d, ", queue[i]);
        }
    }
}
