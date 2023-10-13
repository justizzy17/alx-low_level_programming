#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: integer to add
 * @n2: integer to add
 * @r: resulted to be displayed
 * @size_r: size of the result
 * Return: result (r), otherwise return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1, len_n2, sum, m, n, o;
	int carry = 0;
	int digit_n1 = 0;
	int digit_n2 = 0;
	char reverse;

	len_n1 = 0;
	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	if (len_n1 + 1 > size_r || len_n2 + 1 > size_r)
		return (0);
	m = len_n1 - 1;
	n = len_n2 - 1;
	o = 0
	while (m >= 0 || n >= 0 || carry > 0)
	{
		if (m >= 0)
		digit_n1 = n1[m] - '0';
		if (n >= 0)
		digit_n2 = n2[n] - '0';
		sum = digit_n1 + digit_n2 + carry;
		carry = sum / 10;
		if (o < size_r - 1)
		{
			r[o] = (sum % 10) + '0';
			o++;
		}
		else
			return (0);
		m--;
		n--;
	}
	r[o] = '\0';
	m = 0;
	n = o - 1;
	reverse = r[m];
	for (m = 0, n = o - 1; m < n; m++, n--)
	{
		r[m] = r[n];
		r[n] = reverse;
	}
	return (r);
}
