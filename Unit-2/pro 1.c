#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped element = %d\n", stack[top--]);
}


void print()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");
    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}


void peek()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Top element = %d\n", stack[top]);
}


void peep(int pos)
{
    if (top - pos + 1 < 0)
        printf("Invalid position\n");
    else
        printf("Element at position %d from top = %d\n", pos, stack[top - pos + 1]);
}


void change(int pos, int value)
{
    if (top - pos + 1 < 0)
        printf("Invalid position\n");
    else
    {
        stack[top - pos + 1] = value;
        printf("Element changed successfully.\n");
    }
}

int main()
{
    int choice, value, pos;

    while (1)
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. Change\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            print();
            break;

        case 4:
            peek();
            break;

        case 5:
            printf("Enter position from top: ");
            scanf("%d", &pos);
            peep(pos);
            break;

        case 6:
            printf("Enter position from top: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &value);
            change(pos, value);
            break;

        case 7:
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
