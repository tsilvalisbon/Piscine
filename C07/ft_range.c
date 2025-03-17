/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:31:41 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/15 18:13:25 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	else
		range = malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int main()
{
	int *arr = ft_range(5,10);
	int i = 0;

	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
