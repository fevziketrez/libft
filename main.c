/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:38:11 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/12 20:35:59 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <fcntl.h>

// test1,2,3,4,5,6 rem3 4 , 5 head,,, 5126

void	del_content(void *content)
{
//	free(content);
}
int	main(void)
{
	t_list *head;
	// t_list *temp;
	head = ft_lstnew("test1");
	// ft_lstadd_back(&head, ft_lstnew("test2"));
	// ft_lstadd_back(&head, ft_lstnew("test3"));
	// ft_lstadd_back(&head, ft_lstnew("test4"));
	// ft_lstadd_back(&head, ft_lstnew("test5"));
	// ft_lstadd_back(&head, ft_lstnew("test6"));
	// temp = head->next->next->next;
	ft_lstdelone(head, *del_content);
	// char *temp_content = head->content;
	//head->next->next = temp;
	// printf("%s", temp_content);

	// while (head)
	// {
	// 	printf("%s\n", (char *)head->content);
	// 	head = head->next;
	// }
}
