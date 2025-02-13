int ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello";
    printf("Tem: %d caracteres",ft_strlen(str));
}
*/
