#include <stdlib.h>
 
    int ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

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

char *ft_strdup(char *src)
{
    char *dest;
    int length;

    length = ft_strlen(src);

    dest = (char *) malloc((length + 1) * sizeof(char));

    if (src == NULL)
    {
        return NULL;
    }
    else ft_strcpy(dest, src);
    return (dest);
}
/*
int main() {
    char src[] = "Twenty One";
    char *dest = ft_strdup(src);

        printf("Original: %s\n", src);
        printf("Duplicate: %s\n", dest);
        free(dest); 
}
*/
