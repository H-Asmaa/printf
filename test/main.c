#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include <assert.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len, len1;

    len = printf("%b\n", 255);
    len1 = _printf("%b\n", 255);
    printf("%d\n", len);
    printf("%d\n", len1);
    len = printf("%b\n", 0);
    len1 = _printf("%b\n", 0);
    printf("%d\n", len);
    printf("%d\n", len1);
    len = printf("%b\n", INT_MAX);
    len1 = _printf("%b\n", INT_MAX);
    printf("%d\n", len);
    printf("%d\n", len1);
    return (0);
}
