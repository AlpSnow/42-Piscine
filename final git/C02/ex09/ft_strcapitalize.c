/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:09 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/24 15:51:08 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_allsmall(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void	ft_toolong(char *str, int i, int *neww)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] -32;
		*neww = 0;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		*neww = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;

	ft_allsmall(str);
	i = 0;
	newword = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (newword == 1)
				ft_toolong(str, i, &newword);
			else
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
		}
		else
			newword = 1;
		i++;
	}
	return (str);
}

/*int main(void)
{
    char machaine[] = "salut, comment tu vas ? 42mots quarante-deux";
    printf("Maj puis Min : %s\n", ft_strcapitalize(machaine));

    return (0);
}*/
