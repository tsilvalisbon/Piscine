int occ_z(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			count++;
		}
		i++;
	}
	return (count);
}
#include <stdio.h>
int main ()
{
	char var[] = "zzzhk";
	int count = occ_z(var);

	printf("%d",count);
}
