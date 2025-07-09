/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:02:28 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/05 19:30:07 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;
	unsigned char	*index;

	index = (unsigned char *)s;
	i = 0;
	while (i < size)
	{
		if (index[i] == (unsigned char)c)
			return ((void *)&index[i]);
		i++;
	}
	return (0);
}
