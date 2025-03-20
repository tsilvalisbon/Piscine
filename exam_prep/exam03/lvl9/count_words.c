int count_words(char *str)
{
	int i = 0;
	int word = 1;
	int count = 0;

	while(str[i] != '\0')
	{
		if (str[i] == 32 && word == 0)
		{
			word = 1;
		}
		else if (str[i] != 32 && word)
		{
			word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

#include <stdio.h>
int main()
{
	char str[] = "Conta estas palavras";
	printf("%d", count_words(str));
}
