/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:48:38 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/12 00:57:35 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h> 


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i],argv[j]) > 0)
			{
				ft_swap(&argv[i],&argv[j]);
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		i++;
		write(1, "\n", 1);
	}
}
