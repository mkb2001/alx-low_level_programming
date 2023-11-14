/**
* sum_them_all - sums all arguments
* @n: integer
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum;

va_start(ap, n);
for (i = arg1; i >= 0; i = va_arg(ap, int))
	sum += va_arg(list, int);
va_end(ap);
return (sum);
}
