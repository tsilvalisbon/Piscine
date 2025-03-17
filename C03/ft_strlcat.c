/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:27:03 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/17 17:11:25 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	else if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;

    printf("Before ft_strlcat:\n");
    printf("dest: %s\n", dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("\nAfter ft_strlcat:\n");
    printf("dest: %s\n", dest);
    printf("Returned value: %u\n", result);

    return 0;
}
*/
