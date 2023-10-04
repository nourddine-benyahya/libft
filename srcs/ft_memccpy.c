/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/04 14:11:31 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = (char *)dest;
	new_src = (char *)src;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		if (new_dest[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
