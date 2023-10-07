/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/07 18:48:51 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

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
	int	res;
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
}

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(int) * ft_nbrlen(n));
	if (!ptr)
		return (NULL);
	ft_insert(ptr, n);
	return (ptr);
}
