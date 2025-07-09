/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 20:56:35 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 21:57:18 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*temp;

	len = ft_strlen(str);
	temp = malloc(len + 1);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, str, len + 1);
	return (temp);
}
