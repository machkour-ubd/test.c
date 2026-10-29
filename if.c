#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    if (y > x)
    {
        printf("x is less than y\n");
    }
    else if (y < x)
    {
        printf("x is not less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}

