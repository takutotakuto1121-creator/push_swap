#include "push_swap.h"

int	ft_count_words(char *str)
{
	int	number;

	number = 0;
	while (*str++)
	{
		if (*str == ' ')
			str++;
		if (*str)
			number++;
		while (*str != ' ')
			str++;
	}
	return (number);
}

int	*ft_scan_integers (char *str)
{
	char	*c_str;
	int		*integers;

	c_str = (char *)malloc(sizeof(char) * ft_count_words (str));
	if (!c_str)
		return (NULL);
	integers = (int *)malloc(sizeof(int) * ft_strlen (str));
	if (!integers)
	{
		free (c_str);
		return (NULL);
	}
	while (*c_str)
		*integers++ = *c_str++ - '0';
	return (integers);
}