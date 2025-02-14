#include <stdio.h>

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
/*
int main ()
{
  printf("%d\n", ft_is_prime(1));
  printf("%d\n", ft_is_prime(2));
  printf("%d\n", ft_is_prime(3));
  printf("%d\n", ft_is_prime(4));
  printf("%d\n", ft_is_prime(9));
  printf("%d\n", ft_is_prime(11));
}
*/
