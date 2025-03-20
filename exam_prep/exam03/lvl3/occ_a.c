int occ_a(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if(str[i] == 'a')
			count++;
		i++;
	}
	return (count);
}
#include <stdio.h>
int main()
{
	char str[50] = "There are 2 a's in this string";
	int result = occ_a(str);
	printf("The result of the string '%s' is %d", str, result);
}
