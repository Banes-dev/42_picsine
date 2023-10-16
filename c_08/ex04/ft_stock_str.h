/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:43:35 by ehay              #+#    #+#             */
/*   Updated: 2023/08/29 11:43:38 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int			size;
	char		*str;
	char		*copy;
}				t_stock_str;

#endif