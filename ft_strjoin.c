/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:56:54 by praunkae          #+#    #+#             */
/*   Updated: 2022/02/27 14:10:00 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i1;
	size_t	i2;
	size_t	i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	while (s1[i1] != '\0')
		str[i3++] = s1[i1++];
	while (s2[i2] != '\0' )
		str[i3++] = s2[i2++];
	str[i3] = '\0';
	return (str);
}
