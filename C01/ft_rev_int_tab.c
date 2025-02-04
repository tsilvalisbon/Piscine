#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int swap;

	while (i < size / 2)
		{
			swap = tab[i];
			tab[i] = tab[size - (i + 1)];
			tab[size - (i + 1)] = swap;
			i++;
		}
}

/*
#include <stdio.h>
int main ()
{
int	tab[] = {6,8,9,3,1};
int size = 5;
	
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
