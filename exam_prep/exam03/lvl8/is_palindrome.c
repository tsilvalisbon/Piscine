#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while(j < i)
		{
			if (argv[1][j] != argv[1][i])
			{
				write(1, "\n", 1);
				return (0);
			}
			j++;
			i--;
		}
		int k = 0;
		while (argv[1][k] != '\0')
		{
			write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
