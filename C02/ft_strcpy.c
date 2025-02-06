#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src [i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
    char dest[20] = "Twenty One";
    char src[20] = "Forty Two";

    printf("%s\n", dest);
    printf("%s", ft_strcpy(dest, src));
}
*/
