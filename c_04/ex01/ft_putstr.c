/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:44:28 by ehay              #+#    #+#             */
/*   Updated: 2023/08/18 10:44:28 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdio.h>  // printf
#include <string.h> // strlen

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *test = "hsfuoghh";
// 	ft_putstr(test);
// }