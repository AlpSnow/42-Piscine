/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:11:30 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/25 20:06:32 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}	
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return ((void *)0);
}

/*int	main(void)
{
	char machaine[] = "salut tout le monde";
	char machaine2[] = "tout";
	
	char *test = ft_strstr(machaine, machaine2);

    if (test != 0)
    {
        printf("Similarité trouvée : %s\n", test);
    }
    else
    {
        printf("Aucune similarité trouvée.\n");
    }

	return (0);
}*/
