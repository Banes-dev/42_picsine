/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:28:21 by ehay              #+#    #+#             */
/*   Updated: 2023/08/28 16:44:19 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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
	char	*renv;
	int		i;

	i = 0;
	if (src == NULL)
	{
		return (NULL);
	}
	renv = (char *)malloc(ft_strlen(src) + 1);
	if (renv == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		renv[i] = src[i];
		i++;
	}
	renv[i] = '\0';
	return (renv);
}

// int main(void)
// {
//     printf("%s \n", ft_strdup("test"));
//     return (0);
// }