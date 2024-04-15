#include <stdio.h>
#include <ctype.h>

int ft_strlen(char *str);
int ft_isalpha(char c);
int ft_isdigit(char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int ft_toupper(int c);
int ft_tolower(int C);

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
// test of original isprint()
	alp = 31;
	org_alp = isprint(alp);
	printf("value returned from isprint as A: %d\n", org_alp);
	alp = 32;
	org_alp = isprint(alp);
	printf("value returned from isprint as a: %d\n", org_alp);
	dig = 127;
	org_dig = isprint(dig);
	printf("value returned from isprint as digit 6: %d\n", org_dig);
// test of my ft_isprint()
	alp = 31;
	org_alp = ft_isprint(alp);
	printf("value returned from my ft_isprint as A: %d\n", org_alp);
	alp = 32;
	org_alp = ft_isprint(alp);
	printf("value returned from my ft_isprint as a: %d\n", org_alp);
	dig = 127;
	org_dig = ft_isprint(dig);
	printf("value returned from my ft_isprint as digit 6: %d\n", org_dig);
// test of original toupper()
	alp = 'a';
	org_alp = toupper(alp);
	printf("value returned from toupper as A: %c\n", org_alp);
	alp = 'A';
	org_alp = toupper(alp);
	printf("value returned from toupper as a: %c\n", org_alp);
	dig = '8';
	org_dig = toupper(dig);
	printf("value returned from toupper as digit 6: %c\n", org_dig);
// test of my ft_toupper()
	alp = 'a';
	org_alp = ft_toupper(alp);
	printf("value returned from ft_toupper as A: %c\n", org_alp);
	alp = 'A';
	org_alp = ft_toupper(alp);
	printf("value returned from ft_toupper as a: %c\n", org_alp);
	dig = '8';
	org_dig = ft_toupper(dig);
	printf("value returned from ft_toupper as digit 6: %c\n", org_dig);
// test of original tolower()
	alp = 'A';
	org_alp = tolower(alp);
	printf("value returned from tolower as A: %c\n", org_alp);
	alp = 'a';
	org_alp = tolower(alp);
	printf("value returned from tolower as a: %c\n", org_alp);
	dig = '8';
	org_dig = tolower(dig);
	printf("value returned from tolower as digit 6: %c\n", org_dig);
// test of my ft_tolower()
	alp = 'A';
	org_alp = ft_tolower(alp);
	printf("value returned from ft_tolower as A: %c\n", org_alp);
	alp = 'a';
	org_alp = ft_tolower(alp);
	printf("value returned from ft_tolower as a: %c\n", org_alp);
	dig = '8';
	org_dig = ft_tolower(dig);
	printf("value returned from ft_tolower as digit 6: %c\n", org_dig);
	return (0);
}