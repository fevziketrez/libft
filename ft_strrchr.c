/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:27:06 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/05 13:27:54 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		if (s[i] == c)
			j = i;
	if (c == '\0' && c == s[i])
		j = i;
	if (j != 0)
		return (&s[j]);
	return (0);
}
