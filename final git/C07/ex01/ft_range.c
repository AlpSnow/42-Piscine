/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:15:28 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/05 23:45:32 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if ((max - min) <= 0)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int	minimum;
	int	maximum;
	int	i;
	int len;

	minimum = -54;
	maximum = 10;
	len = maximum - minimum;

	int	*tab = ft_range(minimum, maximum);

	i = 0;

	while(i < len)
	{
		printf("%d, ", tab[i]);
		i++;
	}

	free (tab);
	return (0);
}*/
