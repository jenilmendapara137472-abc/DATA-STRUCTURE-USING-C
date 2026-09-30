#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int value)
{
    if (top < MAX - 1)
        stack[++top] = value;
}


int pop()
{
    if (top >= 0)
        return stack[top--];
    return -1;
}

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }


    for (i = 1; i <= n; i++)
    {
        push(i);
    }


    while (top != -1)
    {
        factorial *= pop();
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
