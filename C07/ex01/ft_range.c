/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 00:55:46 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/13 01:28:59 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	res = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

int main()
{
	int *test;
	int min  = 4;
	int max  = 3;
	int size = max - min;
	int i = 0;

	test = ft_range(min, max);
	while (i < size)
	{
		printf("%d", test[i]);
		i++;
	}
}