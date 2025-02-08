int ft_strcmp (char *s1, char *s2)
{
    int i = 0;

    while(s1[i]!='\0' || s2[i] != '\0')
    {
      if (s1[i] != s2[i]) 
      {
        return s1[i] - s2[i];
      }
        i++;  
    }
}
/*
#include <stdio.h>
int main()
{
    char s1[] = "SMN1";
    char s2[] = "SMN";

    printf("Result: %d", ft_strcmp(s1, s2));
}
*/
