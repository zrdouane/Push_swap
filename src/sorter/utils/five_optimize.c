/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_optimize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:24:08 by zrdouane          #+#    #+#             */
/*   Updated: 2022/04/11 00:24:11 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

int	has_tag(t_list *list, int tag)
{
	while (list)
	{
		if (list->index == tag)
			return (1);
		list = list->next;
	}
	return (0);
}

void	prepare_five(t_mem *mem)
{
	t_list	*l;
	int		min;
	int		cur;

	while (has_tag(mem->a, 0) || has_tag(mem->a, mem->max - 1))
	{
		l = mem->a;
		min = 999;
		while (l)
		{
			if (l->index == 0 || l->index == mem->max - 1)
			{
				cur = distance_to_top(mem->a, l->index);
				if (ft_abs(cur) < ft_abs(min))
					min = cur;
			}
			l = l->next;
		}
		if (min == 0)
			push_b(mem);
		if (min < 0)
			rev_rotate_a(mem);
		if (min > 0)
			rotate_a(mem);
	}
}
