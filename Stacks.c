#include <stdio.h>

int MAX = 25;
int stack[MAX];
int top = -1;

int main() {
    int choice;
    while(1) {
        printf("Choose an option:\n\n");
        printf("1. Push an item");
        printf("2. Pop an item");
        printf("3. Check if stack is full or empty");
        scanf("%d", &choice);
        if(choice == 1) {
            int element;
            printf("Enter an integer to insert into stack: ");
            scanf("%d", &element);
            push(element);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            fullEmpty();
        } else {
            printf("Invalid option\n");
        }
    }
}

int push(int element) {
    if(!isFull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Stack is full\n");
        return;
    }
}

int pop() {
    int data;

    if(!isEmpty()) {
        data = stack[top];
        top = top - 1;
        printf("%d", data);
    } else {
        printf("Stack if empty\n");
    }
}

int fullEmpty() {
    printf("Stack full: %s\n" , isFull()?"True":"False");
    printf("Stack empty: %s\n" , isEmpty()?"True":"False");
}

int isFull() {
    if(top == MAX) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if(top == -1) {
        return 1;
    } else {
        return 0;
    }
}
