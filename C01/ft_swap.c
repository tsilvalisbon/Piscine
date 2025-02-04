#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
	
}

/*
#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;

	printf("Before swap: a = %d, b = %d\n", a, b);

	ft_swap(&a, &b); // Pass the addresses of x and y to the function

	printf("After swap: a = %d, b = %d\n", a, b);

	return 0;
}
*/
