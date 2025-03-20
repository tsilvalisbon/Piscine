#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int j = 1;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (j % 3 == 0 && j % 5 == 0)
				write(1, "5", 1);
			else if (j % 3 == 0)
				write(1, "3", 1);
			else if (j % 5 == 0)
				write(1, "5", 1);
			else
				write(1, &argv[1][i], 1);
			i++;
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

