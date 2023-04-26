<body>
<h1>README PRINTF</h1>

<h2>Write a function that produces output according to a format.</h2>
<ul>
<li>Prototype: int _printf(const char *format, ...);</li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li>format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	<ul>
		<li>c</li>
		<li>s</li>
		<li>%</li>
	</ul>
</li>
<li>You don’t have to reproduce the buffer handling of the C library printf function
</li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>
<!--<h6>Psuedo code :</h6>-->

</body>
<!--
- Checking is the format is NULL, and return (-1) is case it is;
- Fetch variadic arguments;
- loop over format;
	- check if the character in the itteration is equal to %, if true :
		- check if the next character is null, if true :
			- return (-1);
		- Use the switch to check the character that is after the %;
			- in case it's s :
				- Loop trough the argument and print using _putchar;
				- count each character count++;
				- increment the itteration;
			- in case it's c :
				- print the argument using _putchar;
				- Increment the count;
				- increment the itteration;
			- in case % :
				- print the curent character;
				- Increment the counter;
				- increment the itteration;
			- default :
				- print the character;
				- increment the counter;
	- if not equals to % :
		- print character;
		- increment the count;
	- increment the itteration;


<!--

- print asci code to char
- treat (null)
- %\0 return number is not -1
- _printf("test%"); shouldnt print test at start
- _printf("%  s", "valid format"); should





- clean the code
- understand task 1
- make solution > and psuedo code
- start coding, testing , debuging




notes task1:
- %d :
- print the decimal representation of an integer
- signed or unsigned integers
- include a minus sign (-)

- %i :
- print the decimal representation of an integer
- it can take  decimal, octal, or hexadecimal input and print it into base 10
	- prefix :
		starts with 0 :octal number (0405)
		starts with 0x or 0X :hexadecimal


(
	behavior of %i and %d can differ in some edge cases when dealing with special values like NaN, Inf, and negative zero. However, these cases are relatively rare and are likely not to affect most programming tasks.
)

notice they remove :
You don’t have to reproduce the buffer handling of the C library printf function




- Checking is the format is NULL, and return (-1) is case it is;
- Fetch variadic arguments;
- loop over format;
	- check if the character in the itteration is equal to %, if true :
		- check if the next character is null, if true :
			- return (-1);
		- Use the switch to check the character that is after the %;
			- in case it's s :
				- Loop trough the argument and print using _putchar;
				- count each character count++;
				- increment the itteration;
			- in case it's c :
				- print the argument using _putchar;
				- Increment the count;
				- increment the itteration;
			- in case % :
				- print the curent character;
				- Increment the counter;
				- increment the itteration;
			- in case d OR i : //printf("num:%dcent",50) > "num:50cent"
				- then loop over the number as long num > 0
					- print the num % 10
					- num = num / 10
					- Increment the counter;
					- increment the itteration of interior loop;
				- increment the itteration;
			- default :
				- print the character;
				- increment the counter;
	- if not equals to % :
		- print character;
		- increment the count;
	- increment the itteration;


- we forget betty, create cases i d , test main
	- add %i %d in switch
- create function for each case :
	- cases each one have function ( to reduce the size for bitty, clean code)


/*
		for (j = 0; num > 0; j++)
		{
			_putchar((num % 10) + '0');
			num /= 10;
			res++;
		}

*/
/*
Replacing the code above with a recursive function


	num = 39
	count = 0
	negative number
	- if num > 0
		- _rec_number(num/10)
		- print the num % 10
		- count++
	return count

*/

INT_MAX = 2147483647
INT_MIN = -2147483647

The problem is in the size of int, when we multiply by
(-1) the MAX_MIN -2147483648 overflows on the memory space, and none is printed.

We decicde to use long int as a type for num;
We check with the checker and change it in case it's not accepted.
-->


- buffer
-



- i wanna see if i change unsing int, to int if it goona work same
