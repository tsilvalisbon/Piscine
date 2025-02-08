char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    dest[i] = '\0';

    return dest;
}
/*
#include <stdio.h>
int main()
{
    char dest[40] ="This is";
    char src[] = " 42";

    printf("Result: %s", ft_strcat(dest,src));
}
*/
