/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:42:08 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/01 22:46:47 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	nombre;
	int	nombre2;

	nombre = -5;
	nombre2 = 98;

	printf("%d est un nombre premier : %d\n", nombre, ft_is_prime(nombre));
	printf("%d est un nombre premier : %d", nombre2, ft_is_prime(nombre2));
	return (0);
}*/
