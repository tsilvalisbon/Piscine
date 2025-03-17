#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
		if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
			write(1, "5", 1);
		else if ((i + 1) % 3 == 0)
			write(1, "3", 1);
		else if((i + 1) % 5 == 0)
			write(1, "5", 1);
		else
			write(1, &argv[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
