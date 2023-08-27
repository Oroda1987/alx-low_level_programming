#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - add two numbers
 *@a: first number
 *@b: second number
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a:first number
 *@b: second number
 *Return: diffrence of aand b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a:first number
 *@b:second number
 *Return: poduct of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide two numbers
 *@a:first number
 *@b:second number
 *Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - multiplies two  numbers
 *@a:first number
 *@b:second number
 *Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
