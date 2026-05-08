#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	char *ptr = "hello world";
	printf("printf result:\n%p\n", ptr);
	ft_printf("my results is:\n%p\n", ptr);
}