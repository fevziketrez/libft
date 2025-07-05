/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:22:25 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/05 13:16:51 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
//RW REQ
int	int_digits(int n)
{
	int	i;
	long lo_n;

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
char	*ft_itoa(int n)
{
	char	*s;
	int	digit;
	long	lo_n;

	digit = int_digits(n);
	s = malloc(digit+1);
	if (!s)
		return NULL;
	s[digit] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		lo_n =
	while (lo_n > 0)
	{
		s[digit-1] = n % 10;
		n /= 10;
		digit--;
	}
	return s;
}*/
