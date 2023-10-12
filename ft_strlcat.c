/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/05 12:10:06 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_len2;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	dst_len2 = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size || size == 0)
		return (src_len + size);
	while (src[i] != '\0' && dst_len < size - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_len2 + src_len);
}
