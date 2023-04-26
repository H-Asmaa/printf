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
    int len_1, len_2;
    len_1 = printf("0\n", 0);
    len_2 = _printf("%b\n", 0);
    printf("%d\n", len_1);
    printf("%d\n", len_2);
    len_2 = printf("11111111\n");
    len_1 = _printf("%b\n", 255);
    printf("%d\n", len_1);
    printf("%d\n", len_2);
    len_1 = printf("1111111111111111111111111111111\n");
    len_2 = _printf("%b\n", INT_MAX);
    printf("%d\n", len_1);
    printf("%d\n", len_2);
    len_1 = printf("11111111111111111111111111111111\n");
    len_2 = _printf("%b\n", UINT_MAX);
    printf("%d\n", len_1);
    printf("%d\n", len_2);


    return (0);
}
