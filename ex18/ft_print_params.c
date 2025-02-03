/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:09:47 by ansuarez          #+#    #+#             */
/*   Updated: 2024/12/20 15:15:15 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char h);

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a < ac)
	{
		while (av[a][b])
		{
			ft_putchar(av[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a++;
	}
	return (0);
}
