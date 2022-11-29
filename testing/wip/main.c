#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int main()
{
    int c;
    c = -1;
	while (c < 530)
	{
    	if (!!ft_isdigit(c) != !!isdigit(c))
			printf("Result when numeric (%x)(%c) is passed: %d, %d\n", c, c, isdigit(c), ft_isdigit(c));
		c++;
	}
	return 0;
}