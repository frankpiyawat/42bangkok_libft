/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:49:05 by praunkae          #+#    #+#             */
/*   Updated: 2022/02/23 20:24:52 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*s1;

	i = 0;
	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (d1[i] != s1[i])
			return (d1[i] - s1[i]);
		i++;
	}
	return (0);
}
