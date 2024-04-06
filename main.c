#include <stdio.h>
#include <ctype.h>

int ft_strlen(char *str);
int ft_isalpha(char c);
int ft_isdigit(char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(char c);

int main(int ac, char *av[])
{
	int		len;
	char	alp;
	char	org_alp;
	char	dig;
	char	org_dig;

	if (ac == 1)
	{
	return (0);
	}
	len = ft_strlen(av[1]);
	printf ("The length of string is: %d\n", len);

// test of original isalpha()
	alp = 'A';
	org_alp = isalpha(alp);
	printf("value returned from isalpha as A: %d\n", org_alp);
	alp = 'a';
	org_alp = isalpha(alp);
	printf("value returned from isalpha as a: %d\n", org_alp);
// OMG, it returns 1 for capital letter, 2 for lowercase..
// test of my ft_isalpha()
	alp = 'A';
	org_alp = ft_isalpha(alp);
	printf("value returned from my ft_isalpha as A: %d\n", org_alp);
	alp = 'a';
	org_alp = isalpha(alp);
	printf("value returned from my ft_isalpha as a: %d\n", org_alp);

// test of original isdigit()
	dig = '6';
	org_dig = isdigit(dig);
	printf("value returned from isdigit as 6: %d\n", org_dig);
// test of my _ftisdigit()
	dig = '6';
	org_dig = ft_isdigit(dig);
	printf("value returned from my ft_isdigit as 6: %d\n", org_dig);

// test of original isalnum()
	alp = 65;
	org_alp = isalnum(alp);
	printf("value returned from isalnum as A: %d\n", org_alp);
	alp = 97;
	org_alp = isalnum(alp);
	printf("value returned from isalnum as a: %d\n", org_alp);
	dig = '6';
	org_dig = isalnum(dig);
	printf("value returned from isalnum as digit 6: %d\n", org_dig);
// test of my ft_isalnum()
	alp = 65;
	org_alp = ft_isalnum(alp);
	printf("value returned from my ft_isalnum as A: %d\n", org_alp);
	alp = 97;
	org_alp = ft_isalnum(alp);
	printf("value returned from my ft_isalnum as a: %d\n", org_alp);
	dig = '6';
	org_dig = ft_isalnum(dig);
	printf("value returned from my ft_isalnum as digit 6: %d\n", org_dig);

// test of original isascii()
	alp = 0;
	org_alp = isascii(alp);
	printf("value returned from isascii as A: %d\n", org_alp);
	alp = 127;
	org_alp = isascii(alp);
	printf("value returned from isascii as a: %d\n", org_alp);
	dig = 128;
	org_dig = isascii(dig);
	printf("value returned from isascii as digit 6: %d\n", org_dig);
// test of my ft_isascii()
	alp = 0;
	org_alp = ft_isascii(alp);
	printf("value returned from ft_isascii as A: %d\n", org_alp);
	alp = 127;
	org_alp = ft_isascii(alp);
	printf("value returned from ft_isascii as a: %d\n", org_alp);
	dig = 128;
	org_dig = ft_isascii(dig);
	printf("value returned from ft_isascii as digit 6: %d\n", org_dig);
	return (0);
}