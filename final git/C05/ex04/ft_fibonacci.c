/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:21:53 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/01 15:54:46 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	resultat;

	resultat = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	resultat = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (resultat);
}

/*int	main(void)
{
	int	n;

	n = 5;
	printf("resultat de fibo %d", ft_fibonacci(n));
	return (0);
}*/
