/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:16:40 by ehay              #+#    #+#             */
/*   Updated: 2023/08/26 15:13:24 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		return (NULL);
	}
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

// int main(void)
// {
// 	int i = 0;
// 	int min = 5;
// 	int max = 12;
// 	int *result = ft_range(min, max);
// 	while (i < max - min)
// 	{
// 		printf("%i\n", result[i]);
// 		i++;
// 	}
// 	free(result);
//     return (0);
// }