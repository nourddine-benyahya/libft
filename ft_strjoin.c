/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/10 17:18:05 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcat2(const char *s1, char const *s2, char *ptr)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (s1[k] != '\0')
	{
		ptr[j] = s1[k];
		j++;
		k++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		ptr[j] = s2[k];
		k++;
		j++;
	}
	ptr[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;

	i = (ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char);
	ptr = (char *)malloc(i);
	if (!ptr)
		return (NULL);
	ft_strcat2(s1, s2, ptr);
	return (ptr);
}
