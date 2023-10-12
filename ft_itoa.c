/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/09 19:15:24 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int i)
{
	int	res;

	res = 1;
	i--;
	while (i--)
		res = res * 10;
	return (res);
}

int	ft_nbrlen(int i)
{
	int	j;

	j = 0;
	if (i < 0)
		j++;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

void	ft_insert(char *str, int n)
{
	int	len;
	int	power;
	int	i;

	len = ft_nbrlen(n);
	power = ft_power(len);
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
		power /= 10;
	}
	while (power != 0)
	{
		str[i] = (n / power) + '0';
		n -= (n / power) * power ;
		power /= 10;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!ptr)
		return (NULL);
	else
		ft_insert(ptr, n);
	return (ptr);
}
