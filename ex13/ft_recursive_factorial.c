/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:37:55 by ansuarez          #+#    #+#             */
/*   Updated: 2024/12/23 15:39:13 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial (nb - 1));
}

/* int	main(void)
{
	printf("%d\n", ft_recursive_factorial(7);
 	printf("%d\n", ft_recursive_factorial(9);
	return (0);
}
*/
