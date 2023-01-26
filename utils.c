#include "main.h"
<<<<<<< HEAD
/**
 * is_printable - evaluates if a char is printable
 * @c: char to be evaluated
 * Return: 1 if c is printable, 0 if not
 */

=======

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
<<<<<<< HEAD
 * append_hexa_code - Append ASCCI in hexadecimal code to buffer
 * @buffer: array of chars
 * @i: index at which to start appending
 * @ascii_code ASCII code
 *
 * Return: 3 on success
=======
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
<<<<<<< HEAD
	/*hexa format is 2 digit long*/
=======
	/* The hexa format code is always 2 digits long */
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
<<<<<<< HEAD
 * is_digit - verifies if a char is a digit
 * @c: char to be evaluated
=======
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
<<<<<<< HEAD
 * convert_size_number - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type to be casted
 *
 * Return: casted value of num
=======
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
<<<<<<< HEAD
 * convert_size_unsgnd - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type to be casted
 *
 * Return: casted value of num
=======
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
>>>>>>> 01c980002b13a1f310601e00003c49ca0cf7ac53
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
