/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:54:28 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 12:42:49 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdio.h>  // printf

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

// int	main(void)
// {
// 	int a = 42;
//     int b = 10;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d", a);
//     printf("\n");
//     printf("%d", b);
// 	return (0);
// }
