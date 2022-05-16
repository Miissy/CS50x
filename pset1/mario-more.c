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

    // Builds the placdeholder pyramid on the left side
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }
        // Prints the left side of the pyramid
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        // Creates a space between the first pyramid and the second
        printf("  ");
        // Prints the right side of the pyramid
        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }
        // Prints a new row
        printf("\n");
    }
}