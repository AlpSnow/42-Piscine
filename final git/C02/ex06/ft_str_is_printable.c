/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:44:49 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/23 20:02:59 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char *machaine = "super";
	char *machaine2 = "*";

	printf("chaine affichable : %d", ft_str_is_printable(machaine));
	printf("chaine affichable : %d", ft_str_is_printable(machaine2));

	return (0);
}*/
