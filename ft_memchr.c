/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:02:28 by fketrez           #+#    #+#             */
/*   Updated: 2025/06/25 14:02:28 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*   ft_memchr(const void *block, int c, size_t size)
{
    size_t i;
    unsigned char   *index;
    
    index = (unsigned char) block;
    i = 0;
    while (i < size)
    {
        if (index[i] == (unsigned char) c)
            return (void *)index[i];
        i++;
    }
    return 0;
}