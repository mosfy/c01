/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 00:55:46 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/14 21:36:27 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int main()
{
	int *test;
	int min  = 4;
	int max  = 3;
	int size;
	int i = 0;

    size = ft_range(min, max, test);
	while (i < size)
	{
		printf("%d", test[i]);
		i++;
	}
	printf("%d", size)
}