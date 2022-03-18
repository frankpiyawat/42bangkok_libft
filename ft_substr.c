/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 08:59:27 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/15 12:56:23 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (s[i1] != '\0')
	{
		if (i1 >= start)
		{
			while (i2 < len && s[i1] != '\0')
				str[i2++] = s[i1++];
			break ;
		}
		i1++;
	}
	str[i2] = '\0';
	return (str);
}
