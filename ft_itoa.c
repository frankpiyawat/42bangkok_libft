/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:14:48 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/11 20:54:57 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_oho(size_t i, char *str, long int n1);

size_t	ft_len(long int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;
	size_t		i;
	long int	n1;

	n1 = n;
	len = ft_len(n1);
	str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	str[len] = '\0';
	i = len - 1;
	if (n1 < 0)
	{
		str[0] = '-';
		n1 *= -1;
	}
	str = ft_oho(i, str, n1);
	return (str);
}

char	*ft_oho(size_t i, char *str, long int n1)
{
	int	nbr;

	nbr = 0;
	while (i > 0)
	{
		if (n1 > 9)
		{
			nbr = n1 % 10;
			str[i] = nbr + '0';
			n1 /= 10;
			i--;
		}
		if (str[0] == '-' && n1 <= 9)
			break ;
	}
	str[i] = n1 + '0';
	return (str);
}
