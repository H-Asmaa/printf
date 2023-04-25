#include "main.h"
#include <stdio.h>
/**
 * _rec_number - recursive number
 * @num: variable
 * Return: int
 */
int _rec_number(long int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= (-1);
	}
	if (num > 0)
	{
		_rec_number(num / 10);
		_putchar((num % 10) + '0');
		count++;
	}
	return (count);
}
/**
 * _printf_string - print string
 * @tmp: pointer
 * Return: int
 */
int _printf_string(char *tmp)
{
	int res = 0, i;
	char *null = "(null)";

	if (tmp == NULL)
	{
		for (i = 0; *(null + i) != '\0'; i++)
		{
			_putchar(*(null + i));
			res++;
		}
	}
	else
	{
		for (i = 0; tmp[i] != '\0'; i++)
		{
			_putchar(tmp[i]);
			res++;
		}
	}
	return (res);
}
/**
 * _printf_char - print char
 * @lettre: pointer
 * Return: int
 */
int _printf_char(int lettre)
{
	_putchar(lettre);
	return (1);
}
/**
 * _printf_helper - function that produces output according to a format
 * @format: character string - composed of zero or more directives.
 * @arg: character string - composed of zero or more directives.
 * @i: character string - composed of zero or more directives.
 * Return:  the number of characters printed without null
 */
int _printf_helper(const char *format, va_list arg, int *i)
{
	int res = 0;
	long int num;
	char *tmp;

	switch (*(format + *i + 1))
	{
	case 's':
		tmp = va_arg(arg, char *);
		res += _printf_string(tmp);
		break;
	case 'c':
		res += _printf_char(va_arg(arg, int));
		break;
	case '%':
		res += _printf_char('%');
		break;
	case 'i':
	case 'd':
		num = va_arg(arg, int);
		if (num == 0)
		{
			_putchar('0');
			res++;
		}
		else
			res += _rec_number(num);
		break;
	default:
		res += _printf_char(format[*i]);
		*i -= 1;
		break;
	}
	*i += 1;
	return (res);
}
/**
 * _printf - function that produces output according to a format
 * @format: character string - composed of zero or more directives.
 * Return:  the number of characters printed without null
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			count += _printf_helper(format, arg, &i);
		}
		else
		{
			_putchar(*(format + i));
			count++;
		}
	}
	va_end(arg);
	return (count);
}
