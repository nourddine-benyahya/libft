/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/11 12:25:00 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		start++;
		i++;
	}
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i]))
	{
		i--;
	}
	return (ft_substr(s1, start, i - start + 1));
}
/*
int main()
{
    const char s1[]="lorem ipsum  dolor sit amet";
    const char set[]="let";
    printf("%s\n",ft_strtrim(s1,set));
}
*/