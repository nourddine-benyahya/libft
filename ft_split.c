/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/12 12:59:06 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksep(char s, char c)
{
	if (s == c || s == '\0')
		return (1);
	return (0);
}

int	ft_contwords(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (!ft_checksep(s[i], c) && ft_checksep(s[i + 1], c))
			counter++;
		i++;
	}
	return (counter);
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
}

void	ft_insertt(char const *s, char c, char **arr)
{
	int	i;
	int	j;
	int	last;

	i = 0;
	j = 0;
	last = 0;
	while (s[i] != 0)
	{
		while (ft_checksep(s[last], c))
			last++;
		if (!ft_checksep(s[i], c) && ft_checksep(s[i + 1], c))
		{
			arr[j] = ft_strdup(ft_substr(s, last, i - last + 1));
			if (!arr[j])
			{
				ft_free(arr);
				return ;
			}
			j++;
			last = i + 1;
		}
		i++;
	}
	arr[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (ft_contwords(s, c) + 1));
	if (!arr)
		return (NULL);
	ft_insertt(s, c, arr);
	return (arr);
}
/*
int main()
{
    const char s[] = "sad********sdads***dadad*asddsa*****";
    char c = '*';
    char **arr = ft_split(s,c);
    int i = 0;
    while (arr[i] != NULL)
    {
        printf("%s\n",arr[i]);
        i++;
    }
}

			// printf("%d-|%d-|%d-|%d-|%s\n"
			// ,j,last,i-last+1,i,ft_substr(s,last,i-last+1));
*/