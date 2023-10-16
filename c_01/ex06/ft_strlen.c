/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:44:52 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 12:43:03 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdio.h>  // printf
#include <string.h> // strlen

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

// int	main(void)
// {
// 	char *test = "testtttt";
// 	ft_strlen(test);
// 	return (0);
// }
