#include <limits.h>
#include <stdio.h>
#include "../main.h"
#include <assert.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int len_1, len_2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    /* ===========> %d <=========== */
    printf("----------------------\n");
    printf("--> INT(%d) CASES <---\n");
    printf("----------------------\n");

    len_1 = printf("%d\n", 0.0);
    len_2 = _printf("%d\n", 0.0);

    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("%d\n", -0);
    len_2 = _printf("%d\n", -0);

    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("%d\n", 0);
    len_2 = _printf("%d\n", 0);
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    assert(len_1 == len_2);

    len_1 = printf("%d\n", 000);
    len_2 = _printf("%d\n", 000);
    assert(len_1 == len_2);

    len_2 = printf("%d\n", INT_MIN);
    len_1 = _printf("%d\n", INT_MIN);
    assert(len_1 == len_2);

    len_1 = printf("%d\n", INT_MAX);
    len_2 = _printf("%d\n", INT_MAX);
    assert(len_1 == len_2);

    /* ===========> %i <=========== */
    printf("----------------------\n");
    printf("--> INT(%i) CASES <---\n");
    printf("----------------------\n");

    len_1 = printf("%i\n", -10.0);
    len_2 = _printf("%i\n", -10.0);

    len_1 = printf("%i\n", 150.0);
    len_2 = _printf("%i\n", 150.0);

    len_1 = printf("%i\n", 0);
    len_2 = _printf("%i\n", 0);
    assert(len_1 == len_2);

    len_2 = printf("%i\n", INT_MIN);
    len_1 = _printf("%i\n", INT_MIN);
    assert(len_1 == len_2);

    len_1 = printf("%i\n", INT_MAX);
    len_2 = _printf("%i\n", INT_MAX);
    assert(len_1 == len_2);

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
