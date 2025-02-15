#include <unistd.h>

void ft_putstr(char *str)
{
  int  i;

  i = 0;
  while (str[i] != '\0')
    {
      write (1, &str[i], 1);
      i++;
    }
}

int	ft_strcmp(char *s1, char *s2)
{
  unsigned int	i;

  i = 0;
  while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
  {
	i++;
  }
  return (s1[i] - s2[i]); 
}

void ft_swap(char *a, char *b)
{
  char temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int  main(int argc, char **argv)
{
  int i;
  int c;
  i = 1; 
  while(i < argc - 1) 
  { 
  c = i + 1; 
  while(c < argc) { 
    if (ft_strcmp(argv[i], argv[c]) > 0) { 
    ft_swap(argv[i], argv[c]);
    }
    c++; 
  }
  i++; 
  }
  c = 1; 
  while(c < argc)
  {
  ft_putstr(argv[c]);
  write (1, "\n", 1);
  c++;
  }
}*/
