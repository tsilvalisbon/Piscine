int count_alen(char *str)
{
	int i = 0;
	while(str[i] && str[i] != 'a')
		i++;
	return (i);
}
#include <stdio.h>
int main()
{
	char str[] = "Forty Two Party";
	int result = count_alen(str);
	printf("%d", result);
}
