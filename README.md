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
<h6>Psuedo code :</h6>
<ul>
	<li>Checking is the format is NULL, and return (-1) is case it is</li>
	<li>Loop over format</li>
	<ul>
		<li>Check if the character in the itteration is equal to %, if true : </li>
		<ul>
			<li>Check if the next character is null, if true :</li>
			<ul>
				<li>Return (-1)</li>
			</ul>
		</ul>
		<li>Use the switch to check the character that is after the %;</li>
		<ul>
			<li>In case it's s :</li>
			<ul>
				<li>Print using _printf_string<p>_printf_string is a function that takes the argument as string, loops trough it and increment the res with every charcter. If the string is null, it prints (null) to the standard output. Else print the string and increment the res as well. Eventually, return the res back to the _printf_helper function.</p></li>
			</ul>
			<li>In case it's c :</li>
			<ul>
				<li>Print the argument using _putchar</li>
				<li>Increment the count</li>
			</ul>
			<li>In case % :</li>
			<ul>
				<li>Print the curent character</li>
				<li>Increment the counter</li>
			</ul>
			<li>Default :</li>
			<ul>
				<li>Print the character</li>
				<li>Increment the counter</li>
				<li>Decrement the iteration</li>
			</ul>
			<li>Increment the iteration</li>
			<li>Return the res</li>
		</ul>
		<li>If not equals to % </li>
		<ul>
			<li>Print character</li>
			<li>Increment the count</li>
		</ul>
		<li>Increment the itteration</li>
	</ul>
</ul>


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
</body>
