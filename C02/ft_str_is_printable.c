int ft_str_is_printable (char *str)
{
    int i = 0;
    
    if (str[i] == '\0')
        return 1;

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
   char str1[] = "€123"; // Result 1
   char str2[] = "Hello123"; // Result 0
   char str3[] = ""; // Result 1
   int result1 = ft_str_is_printable(str1);
   int result2 = ft_str_is_printable(str2);
   int result3 = ft_str_is_printable(str3);
   
   printf("Result: %d\n", result1);
   printf("Result: %d\n", result2);
   printf("Result: %d\n", result3);
}
*/
