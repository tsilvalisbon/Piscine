/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:08:49 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/15 23:52:56 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_size(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;
	int	sep_len;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		total_len;

	if (size == 0)
	{
		dest = malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
		return (dest);
	}
	total_len = total_size(size, strs, sep) + 1;
	dest = malloc(sizeof(char) * total_len);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char *words[] = {"Hello", "world", "this", "is", "C"};
    char *sep = " 42 "; 
    int size = 5; 

    char *result = ft_strjoin(size, words, sep);
    printf("Result: '%s'\n", result);
    free(result);

    char *empty[] = {};
    result = ft_strjoin(0, empty, sep);
    printf("Result when size is 0: '%s'\n", result);
    free(result);

    char *single_word[] = {"OnlyOneWord"};
    result = ft_strjoin(1, single_word, sep);
    printf("Result with one string: '%s'\n", result);
    free(result);

    char *empty_words[] = {"", "", ""};
    result = ft_strjoin(3, empty_words, sep);
    printf("Result with empty strings: '%s'\n", result);
    free(result);

    return 0;
}
*/
