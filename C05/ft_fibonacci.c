int ft_fibonacci(int index)
{
  if (index < 0)
    return (-1);
  else if (index == 0)
    return (0);
  else if (index == 1)
    return (1);
  else
  {
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
  }
}

/*
#include <stdio.h>

int  main()
{
  printf("%d\n", ft_fibonacci(5));
  printf("%d\n", ft_fibonacci(0));
  printf("%d\n", ft_fibonacci(8));
  printf("%d\n", ft_fibonacci(-5));
}
*/
