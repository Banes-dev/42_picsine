/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:47:28 by ehay              #+#    #+#             */
/*   Updated: 2023/08/15 14:09:21 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char src[] = "Source";
// 	char dest[] = "World1";
// 	char dest1[] = "World2";

// 	printf("%s", ft_strncpy(dest, src, 3));
// 	printf("\n%s", strncpy(dest1, src, 3));
// 	printf("\n%s", ft_strncpy(dest, src, 5));
// 	printf("\n%s", strncpy(dest1, src, 5));
// 	printf("\n%s", ft_strncpy(dest, src, 7));
// 	printf("\n%s", strncpy(dest1, src, 7));
// }
