int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[0] == '\0') 
            return 1;
        if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
            i++;
    }
    return 1;
}
/*
#include <stdio.h>
int main()
{
   char str1[] = "0123"; // Result 1
   char str2[] = "Hello123"; // Result 0
   char str3[] = ""; // Result 1
   int result1 = ft_str_is_numeric(str1);
   int result2 = ft_str_is_numeric(str2);
   int result3 = ft_str_is_numeric(str3);
   
   printf("Result: %d\n", result1);
   printf("Result: %d\n", result2);
   printf("Result: %d\n", result3);
}
*/
