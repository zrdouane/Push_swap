/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:22:45 by zrdouane          #+#    #+#             */
/*   Updated: 2022/04/11 00:22:48 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTER_H
# define SORTER_H

# include <common/common.h>

int		has_tag(t_list *list, int tag);
void	prepare_five(t_mem *mem);

void	tag_list(t_list *start, t_mem *mem);

int		loop_list(t_list *list, t_list *start, int set);
int		find_biggest_loop(t_list *start, int set);

void	double_rotate(t_mem *mem, int *rot_a, int *rot_b);
void	rotate(t_mem *mem, int rot_a, int rot_b);

void	init_resolve(t_mem *mem);
int		distance_to_top(t_list *a, int tag);
int		distance_to_tag(int tag, int size);
t_list	*closest_in_group(t_list *list, int cur_group, int group_sz);
int		can_swap(t_list *list);

int		insert_distance(t_list *list, int t, int size);
void	calculate_b_rotation(t_mem *m, int max_dist, int *rot_a, int *rot_b);
void	populate_b(t_mem *m);
void	resolve(t_mem *m, int cur_group);

#endif
