#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element
void insert()
{
    int item;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        printf("Enter Element: ");
        scanf("%d", &item);

        rear++;
        queue[rear] = item;

        printf("Element Inserted Successfully\n");
    }
}

// Function to delete an element
void deleteElement()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted Element: %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// Function to display the queue
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Elements are: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        printf("\n===== QUEUE MENU =====\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
