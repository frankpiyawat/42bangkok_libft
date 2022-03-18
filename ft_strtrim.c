/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:56:27 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/04 23:51:54 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_first(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (s2[i2] != '\0')
	{
		if (s1[i1] == s2[i2])
		{
			i1++;
			i2 = 0;
		}
		else
			i2++;
	}
	return (i1);
}

size_t	ft_end(const char *s1, char const*s2)
{
	size_t	i1;
	size_t	i2;

	i2 = 0;
	i1 = ft_strlen(s1) - 1;
	while (s2[i2] != '\0' && i1 > 0)
	{
		if (s1[i1] == s2[i2])
		{
			i1--;
			i2 = 0;
		}
		else
			i2++;
	}
	return (i1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	end;
	size_t	len;
	char	*str;

	first = ft_first(s1, set);
	end = ft_end(s1, set);
	if (end == 0 && first == 0)
	{
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (0);
		str[0] = '\0';
		return (str);
	}
	len = end - first + 1;
	str = ft_substr(s1, first, len);
	return (str);
}
