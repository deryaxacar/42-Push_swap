/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:12:51 by deryacar          #+#    #+#             */
/*   Updated: 2023/12/01 18:59:19 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	push_swap(char **av, int control)
{
	t_stack	*stack;
	int		size;
	int		i;

	i = -1;
	stack = malloc(sizeof(t_stack));
	size = ps_strlen(av);
	stack->a = malloc(sizeof(int) * size);
	if (!stack->a)
		return ;
	stack->size_a = size;
	stack->b = malloc(sizeof(int) * size);
	if (!stack->b)
	{
		free(stack->a);
		return ;
	}
	stack->size_b = 0;
	while (++i < size)
		stack->a[i] = ps_atoi(av[i], stack, av, control);
	recheck(stack, size, av, control);
	ft_sort(stack, size);
	free(stack->a);
	free(stack->b);
	free(stack);
}

int	main(int ac, char **av)
{
	int	i;

	i = -1;
	if (ac == 2)
	{
		av++;
		push_swap(av = ft_split(*av, ' '), 2);
		while (av[++i])
			free(av[i]);
		free(av);
	}
	else
		push_swap(++av, 1);
	return (0);
}
