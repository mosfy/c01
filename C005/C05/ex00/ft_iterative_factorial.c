/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:48:38 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/10 18:12:05 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb <= -1)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

//#include <stdio.h>
// int	main(void)
// {
// 	printf("%d \n",ft_iterative_factorial(3));
// 	printf("%d \n",ft_iterative_factorial(5));
// 	printf("%d \n",ft_iterative_factorial(-1));
// 	printf("%d \n",ft_iterative_factorial(0));
// }
