/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:09:18 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/17 14:26:29 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "This is Forty Two Lisbon";
	char to_find1[] = "Lisbon";
	char to_find2[] = "Forty";
	char to_find3[] = "This";
	char to_find4[] = "Two";
	char to_find5[] = "";

	printf("Find'%s' in '%s': %s\n", to_find1, str1, ft_strstr(str1, to_find1));

	printf("Find '%s' in '%s': %s\n", to_find2, str1, ft_strstr(str1, to_find2));

	printf("Find '%s' in '%s': %s\n", to_find3, str1, ft_strstr(str1, to_find3));

	printf("Find '%s' in '%s': %s\n", to_find4, str1, ft_strstr(str1, to_find4));

	printf("Find '%s': %s\n", str1, ft_strstr(str1, to_find5));

	return (0);
}*/
