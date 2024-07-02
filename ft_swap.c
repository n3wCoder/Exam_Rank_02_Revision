#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int c = 1;
	int d = 2;
	printf("c is %d, d is %d\n", c, d);
	ft_swap(&c, &d);
	printf("c is now %d, d is now %d\n", c, d);
	return (0);
}
