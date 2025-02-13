int ft_iterative_factorial(int nb)
{
    int i = 1;
    int result = 1;

    if (nb < 0)
        return 0;
    
    while(nb >= i)
    {
        result *= i;
        i++;
    }
    return (result);
}
/*
#include <stdio.h>
int main ()
{
    printf("O fatorial é 5\n");
    printf("O resultado do fatorial é %d",ft_iterative_factorial(5));
}
*/
