#include "main.h"

/**
 * is_printable - This program evaluates if a character is printable
 * @a: Character to be evaluated.
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char a)
{
	if (a >= 32 && a < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - This program appends ascci in hexadecimal code to buffer
 * @buffer: Array of characters
 * @i: Index at which to start appending
 * @ascii_code: ASSCI code
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - This program verifies if a character is a digit
 * @c: Character to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @no: Number to be casted
 * @size: Size to be casted
 * Return: Casted value of number
 */
long int convert_size_number(long int no, int size)
{
	if (size == S_LONG)
		return (no);
	else if (size == S_SHORT)
		return ((short)no);

	return ((int)no);
}

/**
 * convert_size_unsgnd - This program casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: Casted value of number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
