/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:27:01 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/21 21:35:38 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*int main(void)
{
	int a;
	int b;

	a = 10;
	b = 2;

	printf("a=%d\nb=%d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a=%d\nb=%d", a, b);

	return(0);
}*/
