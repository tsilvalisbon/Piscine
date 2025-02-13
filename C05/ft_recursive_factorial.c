int ft_recursive_factorial(int nb)
{
    if (nb < 0) 
        return 0;
    
    if (nb == 0) 
        return 1;

    return nb * ft_recursive_factorial(nb - 1); 
}
/*
#include <stdio.h>
int main()
{
    printf("O fatorial é 5\n");
    printf("O resultado do fatorial é %d", ft_recursive_factorial(5));
}
*/
