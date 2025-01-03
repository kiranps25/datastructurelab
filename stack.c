#include<stdio.h>

int stack[100], i, n, top, x, ch;

void push();
void pop();
void display();
void peek();

void main() {
    top = -1;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    
    printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (ch != 5);
}

void push() {
    if (top >= n - 1) {
        printf("Stack is full\n");
    } else {
        top++;
        printf("Enter an element to push: ");
        scanf("%d", &x);
        stack[top] = x;
        printf("Element %d is added to the stack.\n", x);
    }
}

void pop() {
    if (top <= -1) {
        printf("Stack underflow. No elements to pop.\n");
    } else {
        printf("Element %d is popped from the stack.\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("The elements in the stack are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("The top element is %d.\n", stack[top]);
    }
}
