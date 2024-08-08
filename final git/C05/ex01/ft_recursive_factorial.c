/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:31:03 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/31 20:12:46 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultat;

	resultat = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 1)
	{
		resultat = nb * (ft_recursive_factorial(nb - 1));
	}
	return (resultat);
}

/*int	main(void)
{
	int test;

	test = 6;

	printf("la factorielle de %d est %d", test, ft_recursive_factorial(test));
	return (0);
}*/
