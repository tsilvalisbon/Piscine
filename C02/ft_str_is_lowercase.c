int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
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
   char str1[] = "abc"; // Result 1
   char str2[] = "Hello123"; // Result 0
   char str3[] = ""; // Result 1
   int result1 = ft_str_is_lowercase(str1);
   int result2 = ft_str_is_lowercase(str2);
   int result3 = ft_str_is_lowercase(str3);
   
   printf("Result: %d\n", result1);
   printf("Result: %d\n", result2);
   printf("Result: %d\n", result3);
}
*/
