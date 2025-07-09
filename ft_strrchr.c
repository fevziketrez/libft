/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:27:06 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 21:56:32 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			index = i;
		i++;
	}
	if ((char)c == '\0')
		index = i;
	if (index != -1)
		return ((char *)&s[index]);
	return (NULL);
}
