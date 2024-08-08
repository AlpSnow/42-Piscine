/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:45:44 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/23 18:53:57 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char *machaine = "Malcolm";
	char *machaine2 = "malcolm";

	printf("contient uniquement minuscule : %d\n", ft_str_is_lowercase(machaine));
	printf("contient uniquement minuscule : %d", ft_str_is_lowercase(machaine2));

	return (0);
}*/
