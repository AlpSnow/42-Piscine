/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:45:37 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/23 18:32:08 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (len > i)
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char text[] = "malcolm";
	char *text2 = "malcolm2";
	
	printf("uniquement alphabet = %d\n", ft_str_is_alpha(text));
	printf("uniquement alphabet = %d", ft_str_is_alpha(text2));
}*/
