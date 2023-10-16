/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:59:36 by ehay              #+#    #+#             */
/*   Updated: 2023/08/31 14:36:52 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

char	*ft_strndup(char *src, int n)
{
	char	*pnt;
	int		i;

	pnt = malloc((n + 1) * sizeof(char));
	if (!pnt)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		pnt[i] = src[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}

int	is_delimiter(char c, char *del)
{
	int	i;

	i = 0;
	while (del[i])
	{
		if (c == del[i])
			return (1);
		i++;
	}
	return (0);
}

int	splited_arr_len(char *str, char *charset)
{
	int		i;
	int		strs_splited_ln;

	i = 0;
	strs_splited_ln = 0;
	if (!is_delimiter(str[0], charset) && str[0] != '\0')
		strs_splited_ln++;
	while (str[i])
	{
		if ((is_delimiter(str[i], charset) && !is_delimiter(str[i + 1], charset)
				&& str[i + 1] != '\0' ))
			strs_splited_ln++;
		i++;
	}
	return (strs_splited_ln);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		strs_splited_ln;
	char	**strs_splited;

	strs_splited_ln = splited_arr_len(str, charset);
	strs_splited = malloc((strs_splited_ln + 1) * sizeof(char *));
	if (!strs_splited)
		return (NULL);
	j = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		while (is_delimiter(str[i], charset))
			i++;
		j = i;
		while (!is_delimiter(str[i], charset) && str[i] != '\0' )
			i++;
		strs_splited[k++] = ft_strndup(&str[j], i - j);
	}
	strs_splited[strs_splited_ln] = NULL;
	return (strs_splited);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int		index;
// 	char	**split;
// 	(void)	argc;
// 	split = ft_split(argv[1], argv[2]);
// 	index = 0;
// 	while (split[index])
// 	{
// 		printf("%s\n", split[index]);
// 		index++;
// 	}
// }
