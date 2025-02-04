#include <unistd.h>

int ft_strlen (char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
			i++;
		}
	return i;
}
/*
#include <stdio.h>
int main ()
{
	char *str = "Lisboa";
	int length = ft_strlen(str);

	printf("O tamanho da string: %s é %d caracteres\n", str, length);
	return 0;
}
*/
