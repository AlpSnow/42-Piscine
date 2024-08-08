/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:10:50 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/22 15:51:57 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = tmp;
		i++;
		size--;
	}
}

/*int main(void)
{
	int tab[6];

	tab[0] = 10;
	tab[1] = 12;
	tab[2] = 2;
	tab[3] = 1;
	tab[4] = 25;
	tab[5] = 7;

	ft_rev_int_tab(tab, 6);

	return (0);
}*/

/*for (int j=0; j<6; j++)
{
	printf("%d\n", tab[j]);
}*/
