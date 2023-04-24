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

</body>
