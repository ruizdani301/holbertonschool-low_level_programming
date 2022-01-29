#include <stdio.h>

/**
 * add - Return sum of a & b
 * @a: First int to add
 * @b: Second int to add
 *
 * Return: Sum of a & b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Return difference of a & b
 * @a: First int to sub
 * @b: Second itn to sub
 *
 * Return: Difference of a & b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Return product of a & b
 * @a: First int to multiply
 * @b: Second int to multiply
 *
 * Return: Product of a & b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Return quotient of a & b
 * @a: Int to divide
 * @b: Int to divide by
 *
 * Return: Quotient of a & b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a / b);
}

/**
 * mod - Return remainder of a & b
 * @a: Int to mod
 * @b: Int to mod by
 *
 * Return: Remainder of a & b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a % b);
}
