/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:45:19 by ehay              #+#    #+#             */
/*   Updated: 2023/08/26 14:24:36 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[i])
			i++;
		while (i > 1)
		{
			write(1, argv[i - 1], ft_strlen(argv[i - 1]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
