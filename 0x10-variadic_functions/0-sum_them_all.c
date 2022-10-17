#include "variadic_functions.h"
#include <stdarg.h>
/** sum_them_all - returns the sum of all its parameters
 * @n: first integer
 * Returns: sum of all a parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ap;

	va_start(ap, n);
	for(i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
