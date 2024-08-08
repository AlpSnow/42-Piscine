/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:23:36 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/18 20:37:53 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	var;

	var = '0';
	while (var <= '9')
	{
		write (1, &var, 1);
		var ++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
