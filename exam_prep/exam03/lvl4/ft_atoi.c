#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
int main()
{
	char str[] = "  -1234abcd373";
	int result = ft_atoi(str);
	printf("%d\n", atoi(str));
	printf("%d", result);
}

