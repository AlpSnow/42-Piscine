/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:34:32 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/23 21:58:40 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char *machaine = "01234567890123456";
	char *machaine2 = "01234566malcolm";

	printf ("contient que des chiffres : %d", ft_str_is_numeric(machaine));
	printf ("contient que des chiffres : %d", ft_str_is_numeric(machaine2));
	
	return (0);
}*/
