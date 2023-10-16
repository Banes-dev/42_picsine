/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:53:44 by ehay              #+#    #+#             */
/*   Updated: 2023/08/28 11:42:01 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	int i = 0;
// 	int *tab;
// 	int min = 5;
// 	int max = 12;
// 	int size = ft_ultimate_range(&tab, min, max);
// 	while (i < size)
// 	{
// 		printf("%i\n", tab[i]);
// 		i++;
// 	}
// 	free(tab);
//     return (0);
// }