/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:04:33 by deryacar          #+#    #+#             */
/*   Updated: 2023/12/01 20:06:14 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ps_atoi2(char *str, int *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ps_atoi(char *str, t_stack *stack, char **av, int control)
{
	unsigned int		i;
	int					sign;
	unsigned long int	num;

	num = 0;
	sign = 1;
	i = ps_atoi2(str, &sign);
	if (!(ft_is_num(str)))
		ft_free_av(av, stack, control);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_free_av(av, stack, control);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && sign == -1) || (num > 2147483647 && sign == 1))
		ft_free_av(av, stack, control);
	return (num * sign);
}
