int ft_sqrt(int nb)
{
  int n = 1;
  
  if (nb <= 0)
    return (0);
  while (n < nb)
    {
      if((n * n) == nb)
      {
        return (n);
      }
      n++;
    }
  return (0);
}
/*
#include <stdio.h>

int  main ()
{
  printf("Square root of 9 is %d", ft_sqrt(9));
}
*/
