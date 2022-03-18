/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:21:09 by praunkae          #+#    #+#             */
/*   Updated: 2022/02/25 15:08:03 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;
	size_t	l;

	i1 = ft_strlen(dst);
	i2 = ft_strlen(dst);
	l = ft_strlen(src);
	if (dstsize == 0)
		return (l);
	if (ft_strlen(dst) < dstsize)
	{
		while (*src != '\0' && i2 < (dstsize - 1))
			dst[i2++] = *src++;
		dst[i2] = '\0';
		return (i1 + l);
	}
	i1 = 0;
	while (i1 <= dstsize)
	{
		if (i1 == dstsize)
			return (i1 + l);
		i1++;
	}
	return (0);
}
