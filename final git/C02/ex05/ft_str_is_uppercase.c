/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:34:10 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/23 20:04:53 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char *machaine = "youpi";
	char *machaine2 = "YOUPI";

	printf("chaine uniquement maj = %d\n", ft_str_is_uppercase(machaine));
	printf("chaine uniquement maj = %d", ft_str_is_uppercase(machaine2));

	return (0);
}*/
