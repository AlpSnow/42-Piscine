/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:22:05 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/29 15:40:40 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensource;
	unsigned int	lendest;
	unsigned int	i;

	lensource = 0;
	lendest = 0;
	while (dest[lendest] != '\0')
		lendest++;
	while (src[lensource] != '\0')
		lensource++;
	if (size <= lendest)
		return (size + lensource);
	i = 0;
	while (src[i] != '\0' && (lendest + i) < (size - 1))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensource);
}

/*int	main(void)
{
	char machaine[50] = "bonjour ";
	char machaine2[] = "tout le monde";

	ft_strlcat(machaine, machaine2, 50);

	printf("nouvelle chaine : %s\n", machaine);
	printf("longueur chaine : %u\n", ft_strlcat(machaine, machaine2, 50));

	return (0);
}*/
