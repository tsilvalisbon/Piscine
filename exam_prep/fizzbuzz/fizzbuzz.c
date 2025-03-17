#include <unistd.h>
int main(void)
{
	int i = 1;
	char c;

	while (i <= 100)
	{
		if((i % 3 == 0) && (i % 5 == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			if (i > 9)
				write(1, &"0123456789"[i / 10] , 1);
				write(1, &"0123456789"[i % 10], 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

