/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/05 12:10:24 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& ((s1[i] - s2[i]) == 0)
		&& (i < size - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
