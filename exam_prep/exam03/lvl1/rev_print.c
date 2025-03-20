#include <unistd.h>
char *rev_print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (str);
}

int main()
{
	char str[] = "Hello World";
	rev_print(str);
}
