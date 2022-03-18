/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:06:08 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:03 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			j++;
		}
	}
	return (j);
}

int	ft_lensub(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break ;
		}
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		sizelen;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (str == 0)
		return (NULL);
	while (j < ft_wordcount(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			sizelen = ft_lensub(&s[i], c);
			str[j] = ft_substr(s, i, sizelen);
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
		j++;
	}
	str[j] = (NULL);
	return (str);
}
