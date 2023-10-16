/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:49:47 by ehay              #+#    #+#             */
/*   Updated: 2023/08/22 16:53:58 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// int main(void)
// {
// 	printf("%d \n", ft_fibonacci(6));
// 	return (0);
// }