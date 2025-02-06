char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "TS42btv";
    printf("%s", ft_strlowcase(str));
}
*/
