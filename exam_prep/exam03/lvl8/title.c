#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	if(argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			write(1, &argv[i][j], 1);
			j++;
			while(argv[i][j])
			{
				if ((argv[i][j - 1] == 32 || argv[i][j - 1] == 9) && argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
