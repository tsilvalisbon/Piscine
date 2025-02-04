#include <unistd.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;

	while (size > 1)
		{ 
			i = 0;
			while (i < size - 1)
				{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab [i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
			  }
			size--;
		}
}
/*
#include <stdio.h>
int main ()
{
int	tab[] = {6,8,9,3,1};
int size = 5;

	ft_sort_int_tab(tab, size);
	
	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	} 
	return (0);
}*/
