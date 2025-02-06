int ft_str_is_alpha(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z'|| (str[i] >= 'A' && str[i] <= 'Z'))
        {
            i++;
        }
        else
            return 0;
    } 
    return 1;
}

/*
#include <stdio.h>
int main()
{
    char str[] = "Hello";
    
    int result = ft_str_is_alpha(str);
    
    printf("Result: %d\n", result);
    
    char str2[] = "Hello123";
    
    printf("Result: %d\n", ft_str_is_alpha(str2));
    
    return 0;
}
*/
