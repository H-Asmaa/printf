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
	int len_1, len_2;

	int x = 0;
	int *p = &x;


	/* ===========> %d <=========== */
	printf("----------------------\n");
	printf("--> INT(%d) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%d\n", 0);
	len_2 = _printf("%d\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%d\n", INT_MIN);
	len_1 = _printf("%d\n", INT_MIN);
/*	assert(len_1 == len_2);*/

	len_1 = printf("%d\n", INT_MAX);
	len_2 = _printf("%d\n", INT_MAX);
/*	assert(len_1 == len_2);*/

	/* ===========> %i <=========== */
	printf("----------------------\n");
	printf("--> INT(%i) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%i\n", 0);
	len_2 = _printf("%i\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%i\n", INT_MIN);
	len_1 = _printf("%i\n", INT_MIN);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%i\n", INT_MAX);
	len_2 = _printf("%i\n", INT_MAX);
	/*	assert(len_1 == len_2);*/

	printf("----------------------\n");
	printf("--> chars() CASES <---\n");
	printf("----------------------\n");

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


	/* ===========> %S <=========== */
	printf("----------------------\n");
	printf("------> S CASES <-----\n");
	printf("----------------------\n");
	/* Test 1: Argument with non-printable characters */
	len_1 = printf("Expected output:   Best\\x0ASchool\n");
	len_2 = _printf("Current output:    %S\n", "Best\nSchool");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:   Hello\\x09World\\x0A\n");
	len_2 = _printf("Current output:    %S\n", "Hello\tWorld\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 2: Argument with only printable characters */
	len_1 = printf("Expected output:   %s\n", "Hello World!");
	len_2 = _printf("Current output:    %S\n", "Hello World!");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 3: Empty argument */
	len_1 = printf("Expected output:   %s\n", "");
	len_2 = _printf("Current output:    %S\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 4: NULL argument */
	len_1 = printf("Expected output:   %s\n", NULL);
	len_2 = _printf("Current output:    %S\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	/* ===========> %r <=========== */
	printf("----------------------\n");
	printf("------> r CASES <-----\n");
	printf("----------------------\n");

	/* Test 1: Reverse string*/
	len_1 = _printf("%r\n", "Reverse it");
	printf("String len: %d\n", len_1);
	/* Test 1: NULL argument*/
	len_2 = _printf("%r\n", NULL);
	printf("String len: %d\n", len_2);


	/* ===========> %d <=========== */
	printf("----------------------\n");
	printf("--> INT(%d) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%d\n", 0);
	len_2 = _printf("%d\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%d\n", INT_MIN);
	len_1 = _printf("%d\n", INT_MIN);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%d\n", INT_MAX);
	len_2 = _printf("%d\n", INT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %i <=========== */
	printf("----------------------\n");
	printf("--> INT(%i) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%i\n", 0);
	len_2 = _printf("%i\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%i\n", INT_MIN);
	len_1 = _printf("%i\n", INT_MIN);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%i\n", INT_MAX);
	len_2 = _printf("%i\n", INT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %b <=========== */
	printf("----------------------\n");
	printf("---> BINARY CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%b\n", 0);
	len_2 = _printf("%b\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%b\n", 255);
	len_1 = _printf("%b\n", 255);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%b\n", UINT_MAX);
	len_2 = _printf("%b\n", UINT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %o <=========== */
	printf("----------------------\n");
	printf("----> OCTAL CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%o\n", 0);
	len_2 = _printf("%o\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%o\n", 255);
	len_1 = _printf("%o\n", 255);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%o\n", UINT_MAX);
	len_2 = _printf("%o\n", UINT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %x <=========== */
	printf("----------------------\n");
	printf("-----> hex CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%x\n", 0);
	len_2 = _printf("%x\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%x\n", 255);
	len_1 = _printf("%x\n", 255);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%x\n", UINT_MAX);
	len_2 = _printf("%x\n", UINT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %X <=========== */
	printf("----------------------\n");
	printf("-----> HEX CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%X\n", 0);
	len_2 = _printf("%X\n", 0);
	/*	assert(len_1 == len_2);*/

	len_2 = printf("%X\n", 255);
	len_1 = _printf("%X\n", 255);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%X\n", UINT_MAX);
	len_2 = _printf("%X\n", UINT_MAX);
	/*	assert(len_1 == len_2);*/

	/* ===========> %p <=========== */
	printf("----------------------\n");
	printf("----> ADDRS CASES <---\n");
	printf("----------------------\n");

	len_1 = printf("%p\n", p);
	len_2 = _printf("%p\n", p);
	/*	assert(len_1 == len_2);*/

	len_1 = printf("%p\n", (void *)0);
	len_2 = _printf("%p\n", (void *)0);
	/*	assert(len_1 == len_2);*/

	return (0);
}
