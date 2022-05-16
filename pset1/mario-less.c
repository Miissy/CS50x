#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user for a number
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Prompt user with a while loop until number is between 1 and 8
    while (n < 1 || n > 8);

    // Builds a left-side pyramid with " " as palceholders
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}