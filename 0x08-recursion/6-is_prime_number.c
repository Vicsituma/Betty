#include "main.h"
int a_prime(int n, int i);
int is_prime_number(int n);
/**
 * a_prime: checks divisibilty of n by lesser numbers of n
 * @n: potential prime number
 * @i: a divisor
 * Return:  0 else 1
*/
int a_prime(int n, int i)
{
	if (n == 1)
		return (0);
	if (i == n && n > 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (a_prime(n, i + 1));
}



/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *  otherwise return 0
 * @n: integer to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/


int is_prime_number(int n)
{
	return (a_prime(n, 2));
}
