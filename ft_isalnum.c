/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:41:22 by fketrez           #+#    #+#             */
/*   Updated: 2025/06/15 16:44:16 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && 'Z' <= c))
		return 1;
	else
		return 0;
}

static int	ft_isdigit(char c)
{
	if ('0' <= c && c <= '9')
		return 1;
	else
		return 0;
}

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) && ft_isdigit(c));
}
