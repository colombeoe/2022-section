#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printls(int*, int);

int main(void)
{
    int length = 1;
    int *ls = malloc(length * sizeof(int));
    ls[0] = get_int("First Number: ");

    while (true)
    {
        int new_int = get_int("Type a non-negative number to add. When you're done, type a negative number: ");
        if (new_int < 0)
        {
            break;
        }

        // TODO: Append to list
    }
    printls(ls, length);
    free(ls);

}


// Prints a list of integers
void printls(int* nums, int length)
{
    printf("[");
    for (int i = 0; i < length; i ++)
    {
        printf("%i", nums[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}