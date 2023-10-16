/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:33:54 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 12:42:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdio.h>  // printf

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b ;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 42;
//     int b = 10;
// 	int div = 0;
// 	int mod = 0;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d", a);
//     printf("%d", b);
// 	printf("\n");
// 	printf("%d", div);
// 	printf(" ,");
// 	printf("%d", mod);
// 	return (0);
// }
