#include "main.h"
int calc_prime_number(int n, int prime);

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number
 * @n: number to be checked
 * Return:(1) if prime, otherwise (0)
 */

int is_prime_number(int n)
{
	if (n <=  1)
		return (0);

	return (calc_prime_number(n, 2));
}

/**
 * calc_prime_number - calculates for prime number
 * @n: number to be checked
 * @prime: determines if its a prime number
 * Return: prime number
 */

int calc_prime_number(int n, int prime)
{
	if (prime == n - 1)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (calc_prime_number(n, prime + 1));

}
