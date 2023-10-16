/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:11:01 by ehay              #+#    #+#             */
/*   Updated: 2023/08/29 14:22:34 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*pnt;
	int		i;

	src_len = ft_strlen(src);
	pnt = malloc((src_len + 1) * sizeof(char));
	if (!pnt)
		return (NULL);
	i = 0;
	while (src[i])
	{
		pnt[i] = src[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		stock_str[i].size = ft_strlen(av[i]);
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}

// int	main(int argc, char **argv)
// {
// 	int					index;
// 	struct s_stock_str	*structs;

// 	structs = ft_strs_to_tab(argc, argv);
// 	index = 0;
// 	while (index < argc)
// 	{
// 		printf("%d\n", index);
// 		printf("\t| source : $
// %s$ @ %p\n", structs[index].str, structs[index].str);
// 		printf("\t|  copie : 
// $%s$ @ %p\n", structs[index].copy, structs[index].copy);
// 		printf("\t| taille : 
// %d\n", structs[index].size);
// 		index++;
// 	}
// }