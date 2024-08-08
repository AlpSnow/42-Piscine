/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:37:14 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/18 20:36:53 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	var;

	var = 'a';
	while (var <= 'z')
	{
		write(1, &var, 1);
		var ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
