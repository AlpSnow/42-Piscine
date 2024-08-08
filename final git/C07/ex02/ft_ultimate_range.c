/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:26:25 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/07 14:30:55 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		return (-1);
	}
	while (size > i)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}

/*int	main(void)
{
	int	minimum;
	int	maximum;
	int	i;
	int *tab;
	int	size;

	minimum = -10;
	maximum = 10;

	size = ft_ultimate_range(&tab , minimum, maximum);

	i = 0;

	while (size > i)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	free(tab);
	return (0);
}*/
