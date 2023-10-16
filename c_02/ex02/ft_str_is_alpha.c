/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:10:57 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 16:13:00 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str [i] <= 'Z'))
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
// 	printf("%d", ft_str_is_alpha("qwqwqwqww"));
// }
