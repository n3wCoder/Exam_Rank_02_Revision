#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i += 1;
		}
		while (i > 0) // do not nest this while loop, will cause infinite
		{
			i--; //decrement i first so it doesnt point at the '\0'
			write(1, &argv[1][i], 1); // write each char in reverse
		}
	}
	write(1, "\n", 1);
}
