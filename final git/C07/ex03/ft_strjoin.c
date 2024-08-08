/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:24:19 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/07 14:31:18 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlenmod(char *str)
{
	int	i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcopymod(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlenmod(strs[i]);
		i++;
	}
	count = count + (ft_strlenmod(sep) * (size - 1));
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	char	*ptrwhile;

	i = 0;
	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * ft_count(size, strs, sep) + 1);
	if (ptr == NULL)
		return (NULL);
	ptrwhile = ptr;
	while (i < size)
	{
		ptrwhile = ft_strcopymod(ptrwhile, strs[i]);
		if (i < (size - 1))
			ptrwhile = ft_strcopymod(ptrwhile, sep);
		i++;
	}
	*ptrwhile = '\0';
	return (ptr);
}

/*int	main(void)
{
	char *machaine[] = {"bonjour", "salut", "hello"};
	char *sep = ", ";
	
	char *machaineconcat = ft_strjoin(3, machaine, sep);

	printf("%s", machaineconcat);

	free(machaineconcat);
	return (0);
}*/
