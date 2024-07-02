#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z') // remember to use && instead of ||
			{
				argv[1][i] -= 32;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') // remember to account for upper case letters
			{
				argv[1][i] += 32;
			}
			write(1, &argv[1][i], 1); // this should not be within the if statements
			i++;
		}
	}
	write (1, "\n", 1);
}
