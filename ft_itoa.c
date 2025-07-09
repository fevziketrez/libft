/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:22:25 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/09 18:58:09 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_digits(int n)
{
	int	i;
	long	lo_n;

	i = 0;
	if (n == 0)
		return (1);
	lo_n = n;
	if (lo_n < 0)
	{
		i++;
		lo_n = -lo_n;
	}
	while (lo_n > 0)
	{
		lo_n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa_helper(char *s, int num, int digit)
{
	long lo_n;

	s[digit] = '\0';
	if (num == 0)
	{
		s[0] = '0';
		return (s);
	}
	lo_n = num;
	if (lo_n < 0)
	{
		s[0] = '-';
		lo_n = -lo_n;
	}
	while (lo_n > 0)
	{
		s[digit - 1] = lo_n % 10 + '0';
		lo_n /= 10;
		digit--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int	digit;

	digit = int_digits(n);
	s = malloc(digit + 1);
	if (!s)
		return (NULL);
	s = ft_itoa_helper(s, n, digit);
	return (s);
}
