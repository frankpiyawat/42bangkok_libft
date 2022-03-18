/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:43:45 by praunkae          #+#    #+#             */
/*   Updated: 2022/02/26 10:36:10 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;
	size_t	i;

	i = 0;
	a = malloc(size * count);
	if (a == NULL)
		return (0);
	while (i < size * count)
		((unsigned char *)a)[i++] = '\0';
	return (a);
}
