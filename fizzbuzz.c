#include <unistd.h>

void print_nbr(int nbr)
{
	char digits[10] = "0123456789"; // char array elements are declared like this
	if (nbr > 9)
	{
		print_nbr(nbr / 10);
	}
	write (1, &digits[nbr % 10], 1);
}

int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			print_nbr(i);
		i++;
		write (1, "\n", 1);
	}
}
