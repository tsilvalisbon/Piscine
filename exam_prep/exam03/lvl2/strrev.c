char *ft_strrev(char *str)
{
	int i = 0;
	int length = 0;
	char swap;

	while(str[length])
		length++;
	while(i < length / 2)
	{
		swap = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = swap;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
	char str[] = "Hello World";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
