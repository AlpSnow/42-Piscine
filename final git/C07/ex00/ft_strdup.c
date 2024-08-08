/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:44:44 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/05 17:09:48 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*strcopy;

	i = 0;
	len = ft_strlen(src);
	strcopy = (char *)malloc(sizeof(char) * (len + 1));
	if (strcopy == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		strcopy[i] = src[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}

/*int main(void)
{

	char machaine[] = "Salut tout le monde";
	char *copie;

	copie = ft_strdup(machaine);

	printf("chaine copie %s", copie);

	free(copie);

	return (0);
}*/
