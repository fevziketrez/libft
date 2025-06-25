/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c  s                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:17:36 by fketrez           #+#    #+#             */
/*   Updated: 2025/06/25 13:17:36 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *ptr1;
    unsigned char    *ptr2;

	ptr1 = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
    if (!ptr1 && !ptr2)
        return 0;
	while (n)
	{
		*ptr1 = *ptr2;
		n--;
	}
    return (dest);
}
