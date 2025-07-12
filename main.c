/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:38:11 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/12 19:50:15 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <fcntl.h>

// fd open, str test1, test2, test3, capitalize \n,

// void	ft_upperptr(int (*f)(int), char *a)
// {
// 	ft_toupper(*(char *a));
// }
int	main(void)
{
	int a = open("test.txt", O_RDWR | O_CREAT | O_APPEND, 0644);
	char *to_print = "test1, test2, test3";

	int i = 0;
	int j;

	// int *buf;
	// buf = malloc(1000 + 1);
	// read(a, buf, 1000);
	char **mystr = ft_split(to_print, ' ');
	//printf("%s", (char *)buf);
	while (mystr[i])
	{
		j = 0;
		while(mystr[i][j])
		{
			mystr[i][j] = ft_toupper(mystr[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (mystr[i])
	{
		printf("%s\n", mystr[i]);
		i++;
	}
	i = 0;
	while (mystr[1 + i])
	{
		mystr[0] = ft_strjoin(mystr[0], "\n");
		mystr[0] = ft_strjoin(mystr[0], mystr[1 + i]);
		i++;
	}
	ft_putstr_fd(mystr[0], a);
}
