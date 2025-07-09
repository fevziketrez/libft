/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:26:42 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 21:44:12 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start_i;
	size_t	end_i;

	if (!s1)
		return (NULL);
	start_i = 0;
	end_i = ft_strlen(s1) - 1;
	while (s1[start_i] && ft_strchr(set, s1[start_i]))
		start_i++;
	while (s1[end_i] && start_i < end_i && ft_strchr(set, s1[end_i]))
		end_i--;
	return (ft_substr(s1, start_i, end_i - start_i + 1));
}
