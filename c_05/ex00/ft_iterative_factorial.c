/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:40:53 by ehay              #+#    #+#             */
/*   Updated: 2023/08/21 16:16:31 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_iterative_factorial(int nb)
{
	int			i;
	long int	nb_modif;

	nb_modif = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		nb_modif = nb_modif * i;
		i++;
	}
	return (nb_modif);
}
// int main(void)
// {
// 	printf("%i", ft_iterative_factorial(6));
// 	return (0);
// }