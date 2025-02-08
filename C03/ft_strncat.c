char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    
    while (src[j] != '\0' && j < nb)
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
    char src[] = " 42Lisbon School";
    unsigned int nb = 12;

    printf("Result: %s", ft_strncat(dest, src, nb));
}*/
