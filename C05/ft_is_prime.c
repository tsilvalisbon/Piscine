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
  printf("%d", ft_is_prime(5));
}
*/
