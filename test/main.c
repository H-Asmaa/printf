#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len_1 = 0, len_2 = 0;

    len_1 = printf("Expected output:    %s$\n", NULL);
    len_2 = _printf("Current output:     %s$\n", NULL);
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    return (0);
}
