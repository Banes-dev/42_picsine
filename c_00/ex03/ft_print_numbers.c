/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:47:44 by ehay              #+#    #+#             */
/*   Updated: 2023/08/10 12:57:51 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}
