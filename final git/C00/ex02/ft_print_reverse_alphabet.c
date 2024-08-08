/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:04:49 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/18 20:37:25 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	var;

	var = 'z';
	while (var >= 'a')
	{
		write (1, &var, 1);
		var --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
