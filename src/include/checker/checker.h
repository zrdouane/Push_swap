/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:22:19 by zrdouane          #+#    #+#             */
/*   Updated: 2022/04/11 00:22:21 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <common/common.h>

int		execute_action(char *name, t_mem *mem);
void	read_instructions(t_mem *mem);

#endif
