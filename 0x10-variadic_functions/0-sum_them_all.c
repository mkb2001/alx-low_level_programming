/**
* sum_them_all - sums all arguments
* @n: integer
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
	sum += va_arg(list, int);
va_end(ap);
return (sum);
}
