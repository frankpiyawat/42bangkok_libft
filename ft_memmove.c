/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:08:40 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/02 00:15:48 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;

	src1 = src;
	dst1 = dst;
	if (dst1 == 0 && src1 == 0)
		return (0);
	if (len == 0)
		return (dst1);
	if (dst1 < src1)
		dst1 = ft_memcpy(dst, src, len);
	else
	{
		len = len - 1;
		while (len > 0)
		{
			dst1[len] = src1[len];
			len--;
		}
		if (len == 0)
			dst1[len] = src1[len];
	}
	return (dst1);
}
