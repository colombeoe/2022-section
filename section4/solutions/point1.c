#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 3;
    int *calls = &n;
    printf("Value is %i\n", *calls);
    printf("Address is %p\n", &calls);
    printf("Address is %p\n", calls);
}