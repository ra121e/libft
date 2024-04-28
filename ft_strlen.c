#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

#include <stdio.h>

int	main(void)
{
	char	a[20] = "length test";

	printf("return value from ft_strlen %d\n", ft_strlen(a));
	return (0);
}