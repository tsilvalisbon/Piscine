int ft_strncmp (char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while((s1[i]!='\0' || s2[i] != '\0') && i < n)
    {
      if (s1[i] != s2[i]) 
      {
        return s1[i] - s2[i];
      }
        i++;  
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "SMN1";
    char s2[] = "SMN";
    unsigned int limit = 4;

    printf("Result: %d", ft_strncmp(s1, s2, limit));
}
*/
