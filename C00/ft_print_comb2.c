/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:21:36 by tomandra          #+#    #+#             */
/*   Updated: 2025/03/11 15:24:38 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left_nbr;
	int	right_nbr;

	left_nbr = 0;
	while (left_nbr <= 98)
	{
		right_nbr = left_nbr + 1;
		while (right_nbr <= 99)
		{
			ft_putchar (left_nbr / 10 + '0');
			ft_putchar (left_nbr % 10 + '0');
			ft_putchar (' ');
			ft_putchar (right_nbr / 10 + '0');
			ft_putchar (right_nbr % 10 + '0');
			if (left_nbr != 98 || right_nbr != 99)
				write(1, ", ", 2);
			right_nbr++;
		}
		left_nbr++;
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
