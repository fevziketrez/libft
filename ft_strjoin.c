/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:47:58 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 19:09:05 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;
	size_t	i;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	i = 0;
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	len2 = 0;
	while (s2[len2])
	{
		res[i] = s2[len2];
		len2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
