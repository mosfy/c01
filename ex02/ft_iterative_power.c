/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:40:29 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/11 04:24:58 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power <= -1)
		return (0);
	while (power > i)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d = 1 \n",ft_iterative_power(3, 0));
// 	printf("%d = 0\n",ft_iterative_power(5, -1));
// 	printf("%d = -1\n",ft_iterative_power(-1, 3));
// 	printf("%d = 0\n",ft_iterative_power(0, 10));
// 	printf("%d = 243\n",ft_iterative_power(3, 5));
// }
