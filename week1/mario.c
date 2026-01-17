#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int rows;
    int columns;
    int spaces;

    do
    {
        n = get_int("Enter number 1-8\n");
    }
    while (n < 1 || n > 8);
    for (rows = 0; rows < n; rows++)
    {
        for (spaces = 0; spaces < n - rows - 1; spaces++)
        {
            printf(" ");
        }
        for (columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }
}
