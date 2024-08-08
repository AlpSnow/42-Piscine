/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:59:22 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/22 21:58:40 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}
/*for(int j=0; j < 6; j++)
{
	printf("%d\n", tab[j]);
}*/

/*int main(void)
{
	int array[6];

	array[0] = 10;
	array[1] = 0;
	array[2] = 5;
	array[3] = 3;
	array[4] = 25;
	array[5] = 15;

	ft_sort_int_tab(array, 6);

	return (0);
}*/
