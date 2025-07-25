/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:47:06 by britela-          #+#    #+#             */
/*   Updated: 2025/07/25 16:14:13 by britela-         ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] < 14))
	{
		i++;
	}
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	res = res * sign;
	return (res);
}

int	main(int argc, char *argv[])
{
	int	nb;
	int	i;
	int	entier;

	i = 1;
	if (argc <= 1)
	{
		printf("ciao");
		return (-1);
	}
	//SI arguments sans ""
	else if (argc > 2)
	{
		while (i != argc && nb != 0)
		{
			nb = ft_nbr_valide(argv[i]);
			i++;
		}
	}
	//SINON arguments avec ""
	else if (argc == 2)
	{

	}
	if (nb == 1)
	{
		printf ("ok, que des nombres\n");
		i = 1;
		while (i != argc)
		{
			entier = ft_atoi(argv[i]);
			printf("argv[%d] = %s (chaine) -> %d (entier) \n",i ,argv[i], entier);
			i++;
		}
	}
	else
		printf("non");
	return (0);
}
