int ft_is_prime(int nb)
{
  int i = 2;
  if (nb <= 1)
    return (0);
  if (nb == 2 || nb == 3)
    return (1);
  while (i <= nb / 2) {
    if (nb % i == 0) {
        return (0);
    }
    i++;
  }
  return (1);
}

int ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return (nb);
}
/*
#include <stdio.h>
int main()
{
  printf("%d\n", ft_find_next_prime(-2));
  printf("%d\n", ft_find_next_prime(1));
  printf("%d\n", ft_find_next_prime(2));
  printf("%d\n", ft_find_next_prime(4));
  printf("%d\n", ft_find_next_prime(5));
  printf("%d\n", ft_find_next_prime(8));
  printf("%d\n", ft_find_next_prime(11));
}
*/
