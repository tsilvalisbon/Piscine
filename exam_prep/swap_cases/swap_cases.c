char *swap_cases(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "AbC12";
	swap_cases(str);
	printf("%s", str);
}
