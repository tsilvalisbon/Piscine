/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 05:31:40 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/17 18:04:20 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*copy;

	copy = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	copy = strcpy(copy, str);
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int							i;
	struct t_stock_str			*strs;

	strs = (t_stock_str *)malloc((ac + 1) * sizeof(struct t_stock_str));
	if (!strs)
		return (0);
	i = 0;
	while (i < ac)
	{
		strs[i].str = av[i];
		strs[i].size = ft_strlen(av[i]);
		strs[i].copy = ft_strdup(av[i].str);
		i++;
	}
	strs[i].str = 0;
	strs[i].size = 0;
	strs[i].copy = 0;
	return (strs);
}
