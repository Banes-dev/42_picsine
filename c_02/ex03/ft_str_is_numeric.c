/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:50:50 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 15:57:53 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main()
// {
// 	printf("%d", ft_str_is_numeric("42"));
// }
