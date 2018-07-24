#include <stdio.h>
#include "../includes/libft.h"

int		main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("a+-2345"));
	printf("atoi: %d\n", atoi("a+-2345"));
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 is schoo for cool"));
	printf("atoi: %d\n", atoi("+42 is school for cool"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("          +42"));
	printf("atoi: %d\n", atoi("          +42"));
	printf("ft_atoi: %d\n", ft_atoi("+         42"));
	printf("atoi: %d\n", atoi("+         +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("12345678901"));
	printf("atoi: %d\n", atoi("12345678901"));
	printf("ft_atoi: %d\n", ft_atoi("-00000000000000000000000000050"));
	printf("atoi: %d\n", atoi("-0000000000000000000000000000050"));
	printf("ft_atoi: %d\n", ft_atoi("0xFF"));
	printf("atoi: %d\n", atoi("0xFF"));
	printf("ft_atoi: %d\n", ft_atoi("-1234567890123456789"));
	printf("atoi: %d\n", atoi("-1234567890123456789"));
	printf("ft_atoi: %d\n", ft_atoi("12345678901234567890")); // returns -350287150
	printf("atoi: %d\n", atoi("12345678901234567890")); // returns -1
}
