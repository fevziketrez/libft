/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:39:39 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 21:32:06 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		str = (char *)malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}
