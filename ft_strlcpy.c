/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:21:35 by fketrez           #+#    #+#             */
/*   Updated: 2025/06/25 13:21:35 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(char* str)
{
	size_t i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dst_size;
    size_t  src_size;

    i = 0;
    dst_size = ft_strlen(dst);
    src_size = ft_strlen(src);
    while ()
}