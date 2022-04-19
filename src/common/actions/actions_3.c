/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:16:41 by zrdouane          #+#    #+#             */
/*   Updated: 2022/04/11 00:16:44 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	rotate_b_a(t_mem *mem)
{
	put_top_to_bottom(&(mem->a));
	put_top_to_bottom(&(mem->b));
	if (mem->print)
		ft_putstr("rr");
}

void	ft_puterr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(2, str, i);
	write(2, &n, 1);
}
