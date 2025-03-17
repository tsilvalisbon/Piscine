/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:47:31 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/15 23:54:52 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>
int main() {
    int *range;
    int min = 5, max = 10;
    int size;

    size = ft_ultimate_range(&range, min, max);
  
    int i = 0;
    while (i < size)
    {
        printf("%d ", range[i]);
	i++;
    }
    printf("\n");
    free(range);
    return 0;
}
*/
