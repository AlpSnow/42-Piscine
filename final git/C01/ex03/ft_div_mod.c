/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:54:16 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/21 21:06:45 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{

	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	
	printf("a=%d", div);
	printf("b=%d", mod);

	return(0);
}*/
