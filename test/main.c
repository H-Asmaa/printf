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
    printf("%d\n", 045);
    _printf("%d\n", 045);
    printf("%d\n", 0xF6);
    _printf("%d\n", 0xF6);
    printf("%d\n", 15);
    _printf("%d\n", 15);
    printf("%d\n", 'c');
    _printf("%d\n", 'c');
    printf("%i\n", 045);
    _printf("%i\n", 045);
    printf("%i\n", 0xF6);
    _printf("%i\n", 0xF6);
    printf("%i\n", 15);
    _printf("%i\n", 15);
    printf("%i\n", 'c');
    _printf("%i\n", 'c');
    /* ===========> %d <=========== */
    printf("----------------------\n");
    printf("--> INT(%d) CASES <---\n");
    printf("----------------------\n");
    len_1 = printf("%d\n", 0);
    len_2 = _printf("%d\n", 0);

    len_2 = printf("%d\n", INT_MIN);
    len_1 = _printf("%d\n", INT_MIN);

    len_1 = printf("%d\n", INT_MAX);
    len_2 = _printf("%d\n", INT_MAX);

    /* ===========> %i <=========== */
    printf("----------------------\n");
    printf("--> INT(%i) CASES <---\n");
    printf("----------------------\n");
    len_1 = printf("%i\n", 0);
    len_2 = _printf("%i\n", 0);

    len_2 = printf("%i\n", INT_MIN);
    len_1 = _printf("%i\n", INT_MIN);

    len_1 = printf("%i\n", INT_MAX);
    len_2 = _printf("%i\n", INT_MAX);

    printf("%r\n");
    _printf("%r\n");
    /* ===========> %c <=========== */
    printf("----------------------\n");
    printf("----> CHAR CASES <----\n");
    printf("----------------------\n");
    len_1 = printf("Expected output:    %c\n", 53);
    len_2 = _printf("Current output:     %c\n", 53);
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %cc\n", 'a');
    len_2 = _printf("Current output:     %cc\n", 'a');
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %cAAA\n", 'a');
    len_2 = _printf("Current output:     %cAAA\n", 'a');
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %yd\n");
    len_2 = _printf("Current output:     %yd\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %c\n", '\0');
    len_2 = _printf("Current output:     %c\n", '\0');
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %%%c\n", 'y');
    len_2 = _printf("Current output:     %%%c\n", 'y');
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);

    /* ===========> %s <=========== */
    printf("----------------------\n");
    printf("---> STRING CASES <---\n");
    printf("----------------------\n");
    len_1 = printf("Expected output:    %s\n", "Morocco");
    len_2 = _printf("Current output:     %s\n", "Morocco");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %s$\n", "");
    len_2 = _printf("Current output:     %s$\n", "");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %s$\n", NULL);
    len_2 = _printf("Current output:     %s$\n", NULL);
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %s\n", "hello, world");
    len_2 = _printf("Current output:     %s\n", "hello, world");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %sForLife\n", "Morocco");
    len_2 = _printf("Current output:     %sForLife\n", "Morocco");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);

    /* ===========> % <=========== */
    printf("----------------------\n");
    printf("-> PERCENTAGE CASES <-\n");
    printf("----------------------\n");
    len_1 = printf("Expected output:    %%\n");
    len_2 = _printf("Current output:     %%\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %%%%%%\n");
    len_2 = _printf("Current output:     %%%%%%\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    printf("Expected output:    ");
    len_1 = printf("%");
    printf("\n");
    printf("Current output:     ");
    len_2 = _printf("%");
    printf("\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    printf("Expected output:    ");
    len_1 = printf("%   ");
    printf("\n");
    printf("Current output:     ");
    len_2 = _printf("%   ");
    printf("\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    printf("Expected output:    ");
    len_1 = printf("test%");
    printf("\n");
    printf("Current output:     ");
    len_2 = _printf("test%");
    printf("\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    printf("Expected output:    ");
    len_1 = printf("%  s", "valid format");
    printf("\n");
    printf("Current output:     ");
    len_2 = _printf("%  s", "valid format");
    printf("\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);

    return (0);
}
