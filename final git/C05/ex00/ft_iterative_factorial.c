/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:00:07 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/31 16:32:29 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	resultat = 1;
	i = 2;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= i)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}

/*int	main(void)
{
	int test;
	int test2;
	int test3;
	int test4;

	test = 5;
	test2 = 0;
	test3 = -10;
	test4 = 6;

	printf("la factoriel de %d est %d\n", test, ft_iterative_factorial(test));
	printf("la factoriel de %d est %d\n", test2, ft_iterative_factorial(test2));
	printf("la factoriel de %d est %d\n", test3, ft_iterative_factorial(test3));
	printf("la factoriel de %d est %d\n", test4, ft_iterative_factorial(test4));

	return (0):
}*/
