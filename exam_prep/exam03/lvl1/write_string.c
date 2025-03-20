#include <unistd.h>

void	write_string(char *str)
{
	int i;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
