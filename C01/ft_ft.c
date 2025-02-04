#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main()
{
	int	valor = 0; 

	printf("Valor inicial do inteiro: %d", valor); // O inteiro aqui é 0
	printf("\n");
	ft_ft(&valor); // Passar o inteiro como ponteiro para a função 
	printf("A função atribui 42 ao inteiro que é assim %d", valor); // O valor do inteiro agora é 42
	return 0;
}
*/
