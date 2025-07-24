/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:47:06 by britela-          #+#    #+#             */
/*   Updated: 2025/07/24 16:55:40 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	ft_nbr_valide(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		i++;
	}
	if (size == i)
		return (1);
	else
		return (0);
}


int	main(int argc, char *argv[])
{
	int	nb;
	int	i;

	i = 1;
	if (argc <= 1)
	{
		printf("ciao");
		return (-1);
	}
	else
	{
		while (i != argc && (nb != 0 || nb == 1))
		{
			nb = ft_nbr_valide(argv[i]);
			i++;
		}
	}

	if (nb == 1)
	{
		printf ("ok");
	}
	else
		printf("non");
	return (0);
}
