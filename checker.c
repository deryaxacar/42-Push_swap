/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:45:11 by deryacar          #+#    #+#             */
/*   Updated: 2023/12/04 15:10:13 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

int	singular_exec(t_stack *stack, char *instruction, int control)
{
	if (!ft_strcmp(instruction, "sa\n"))
		sa(stack, 1);
	else if (!ft_strcmp(instruction, "sb\n"))
		sb(stack, 1);
	else if (!ft_strcmp(instruction, "ra\n"))
		ra(stack, 1);
	else if (!ft_strcmp(instruction, "rb\n"))
		rb(stack, 1);
	else if (!ft_strcmp(instruction, "rra\n"))
		rra(stack, 1);
	else if (!ft_strcmp(instruction, "rrb\n"))
		rrb(stack, 1);
	else if (!ft_strcmp(instruction, "pa\n"))
		pa(stack, 1);
	else if (!ft_strcmp(instruction, "pb\n"))
		pb(stack, 1);
	else if (doubles_exec(stack, instruction) == 0)
	{
		free(instruction);
		free_error(stack, 1, control);
	}
	return (1);
}

int	doubles_exec(t_stack *stack, char *instruction)
{
	if (!ft_strcmp(instruction, "ss\n"))
		ss(stack, 1);
	else if (!ft_strcmp(instruction, "rr\n"))
		rr(stack, 1);
	else if (!ft_strcmp(instruction, "rrr\n"))
		rrr(stack, 1);
	else
		return (0);
	return (1);
}

void	ft_get_checker(t_stack *stack, int control)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		singular_exec(stack, str, control);
		free(str);
		str = get_next_line(0);
	}
	if (ft_sorted_control(stack->a, stack->size_a, 0) && stack->size_b == 0)
		write(1, "\033[0;32mOK\n", 10);
	else
		write(1, "\033[0;31mKO\n", 10);
	free_error(stack, 0, control);
}

void	ft_checker(char **av, int control)
{
	t_stack	*stack;
	int		size;
	int		i;

	i = -1;
	stack = malloc(sizeof(t_stack));
	size = ps_strlen(av);
	stack->a = malloc(sizeof(int) * size);
	stack->av = av;
	if (!stack->a)
		return ;
	stack->size_a = size;
	stack->b = malloc(sizeof(int) * size);
	if (!stack->b)
	{
		free (stack->a);
		return ;
	}
	stack->size_b = 0;
	while (++i < size)
		stack->a[i] = ps_atoi(av[i], stack, av, control);
	recheck(stack, size, av, control);
	ft_get_checker(stack, control);
}

int	main(int ac, char **av)
{
	int	control;

	control = 1;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			control = 2;
			av = ft_split(*av, ' ');
		}
		ft_checker(av, control);
	}
	return (0);
}
