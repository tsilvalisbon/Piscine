int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (nb < 0)
        return 0;
    if (nb == 1)
    {
        return 1;
    }

    while(power > 0)
    {
        result *= nb;
        power--;
    }
    return (result);
}
/*
#include <stdio.h>
int main ()
{
    printf("Os inputs são 5 e 3\n");
    printf("O resultado é %d",ft_iterative_power(5,3));
}*/
