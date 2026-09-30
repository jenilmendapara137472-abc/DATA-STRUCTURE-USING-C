#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("No smallest divisor exists for %d.\n", num);
    }
    }
    else
    {
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("Smallest divisor of %d = %d\n", num, i);
                break;
            }
        }
    }

    return 0;
}
