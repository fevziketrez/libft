/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:19:36 by fketrez           #+#    #+#             */
/*   Updated: 2025/06/25 22:04:45 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *s1, const void *s2, size_t n)
{
    unsigned char* ptr1;
	unsigned char* ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (!ptr1 && !ptr2)
		return 0;
	if (ptr1 == ptr2 || n == 0)
		return (s1);
	if (s2 < s1)
		ft_memcpy(ptr1, ptr2, n);
	else
		while (n--)
			ptr1[n] = ptr2[n];
	return (s1);
}
