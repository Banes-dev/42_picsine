/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:22:26 by ehay              #+#    #+#             */
/*   Updated: 2023/08/11 11:33:20 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdio.h>  // printf

void	ft_swap(int *a, int *b)
{
	int	tempa;

	tempa = *a;
	*a = *b;
	*b = tempa;
}

// int	main(void)
// {
// 	int a = 21;
//     int b = 42;

// 	ft_swap(&a, &b);
// 	printf("%d", a);
//     printf("%d", b);
// 	return (0);
// }
