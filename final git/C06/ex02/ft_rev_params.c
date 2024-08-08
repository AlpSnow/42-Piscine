/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:52:05 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/04 22:26:58 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_getlastlocation(int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		i++;
	}
	i--;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = ft_getlastlocation(argc);
	j = 1;
	k = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				write(1, &argv[i][k], 1);
				k++;
			}
			write(1, "\n", 1);
			j++;
			i--;
		}
	}
	return (0);
}
